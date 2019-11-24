const express = require('express');
const app = express();

const fs = require('fs');
const hbs = require('hbs');
const path = require('path')
const bodyParser = require('body-parser');
const morganBody = require('morgan-body');


app.use(bodyParser.json());
app.set('view engine', 'html');
app.set('views', path.join(__dirname, 'views'));
app.use('/static', express.static(path.join(__dirname, 'static')));
app.engine('html', require('hbs').__express);
morganBody(app);

const session = require('express-session');
const randomize = require('randomatic');

app.use(session({
    name: 'session',
    secret: randomize('aA0', 69),
    resave: false,
    saveUninitialized: false,
    cookie: { secure: true }
}));

app.use(function (req, res, next) {
    if (req.session.archive === undefined) {
        req.session.archive = {
            'dumb': 'yes',
            // formula: '[0.20 * a + 0.25 * e + 0.25 * p]', // depends on grade
            // assignment: '',
            // exam: '',
            // paper: '',
        };
    }
    next();
});

app.get('/debug', (req, res) => {
    res.header('Content-Type', 'text/plain');
    return res.end(fs.readFileSync(__filename).toString());
});

app.get('/log', (req, res) => {
    res.header('Content-Type', 'text/plain');
    return res.end(fs.readFileSync(path.join(__dirname, '.log')).toString());
});

app.get('/', (req, res) => {
    return res.render('index');
});

function deepFreeze(obj) {
    var propNames = Object.getOwnPropertyNames(obj);
    for (let name of propNames) {
        let value = obj[name];
        obj[name] = value && typeof value === 'object' ? deepFreeze(value) : value;
    }
    return Object.freeze(obj);
}

function isObject(obj) {
    return obj !== null && typeof obj === 'object';
}

function merge(target, source) {
    for (let key in source) {
        if (isObject(target[key]) && isObject(source[key])) {
            merge(target[key], source[key]);
        } else {
            target[key] = source[key];
        }
    }
    return target;
}

function clone(target) {
    return merge({}, target);
}

const evaluate = require('static-eval');
const parse = require('esprima').parse;

app.post('/api/v2/', (req, res) => {
    //	var archive = req.session.archive
    deepFreeze(Object);
    var student = clone(req.body);

    if (student.name.includes('Baker') || student.name.includes('Purvis')) {
        return res.json({
            'pass': 'n' + randomize('?', 10, { chars: 'o0' }) + 'pe'
        });
    }

    if (student.paper !== undefined) {
        let ast = parse(student.formula).body[0].expression;
        let weight = evaluate(ast, {
            a: student.assignment,
            e: student.exam,
            p: student.paper
        });

        return res.json({
            'pass': parseFloat(10.5) <= parseFloat(weight) ? 'yes' : 'no'
        });
    }
    return res.end();
});
app.listen(1337);