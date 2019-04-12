var flag = "tdhNlck";
var shift = 19;
var decrypt = function() 
{
	var alphaArray = [];
	for (var i=0; i<arguments.length; i++) 
	{
		alphaArray.push(String.fromCharCode(parseInt(arguments[i],10) + 97 - 1));
	}
	attemptDecrypt(alphaArray);
}
                            
