#!/usr/bin/env python
# -*- coding: utf-8 -*-
from functools import wraps
from flask import Flask, session, render_template, request, Response, render_template_string
from re import compile, escape, search
import random
import string

app = Flask(__name__)
app.config['SECRET_KEY'] = ''.join(
	random.choice(string.hexdigits) for _ in range(22))


class kancho(object):
	rebels = 0

	def __init__(self,  **kw):
		type(self).rebels += 1
		self.__dict__.update(**kw)

	def __str__(self):
		return self.__dict__.values()[0]


def rite_of_passage(f):
	@wraps(f)
	def safe(s):
		objects = ['self', 'config', 'namespace', 'request',
                    'session', 'url_for', 'get_flashed_messages']
		return ''.join(['{{% set {} = None %}}'.format(obj) for obj in objects]) + s

	def born2pwn(*a, **kw):
		global report
		forbidden = ['{{', '(', '_', '.']
		name = request.args.get('name', None)
		if name:
			regex = compile(
				'|'.join(map(escape, sorted(forbidden, key=lambda f: -len(f)))))
			matches = regex.findall(name)
			if matches:
				return render_template_string(exonerate(set(matches)))
			report = render_template_string(accounting(safe(name)))
		return f(*a, **kw)
	return born2pwn


def exonerate(reason):
	HTML = '{% extends "index.html" %}{% block content %}'
	HTML += '<h3>Momochi Sandayū did not like <h3>'.decode('utf-8')
	HTML += '<b>{% raw %}' + ', '.join(reason) + '{% endraw %}<b>'
	HTML += '{% endblock %}'
	return HTML


def accounting(name):
	HTML = '{{% extends "index.html" %}}{{% block content %}}'
	HTML += '<h2>🎌 {flag}</h1>'.decode('utf-8')
	HTML += '<h3>{baby_ninja} joined, total number of rebels: {reb_num}<br>'
	HTML += '{{% endblock %}}'
	return HTML.format(baby_ninja=kancho(genin=name), reb_num=kancho.rebels, flag=file('/app/flag').read())


@app.route('/')
@rite_of_passage
def index():
	if session.get('leader'):
		return report
	return render_template('/index.html')


@app.route('/debug')
def debug():
	return Response(open(__file__).read(), mimetype='text/plain')


if __name__ == '__main__':
	app.run(host='0.0.0.0', port=1337, threaded=True)
