# cmd_line
#
#	Examples of printing, retrieving command line arguments, console input..

import sys									# part of the standard library

print ("=" * 77)								# print 80 equal signs

print "\nThis program's cmd line is a list that contains:\n %s\n" % sys.argv

#
# find the number of parameters that are on the command line
#
arg_nums = len(sys.argv)

print "Number of arguments on the command line is:\t\t ".arg_nums
print "This program's name:\n"  % sys.argv[0]

if (arg_nums > 1):
	print "sys.argv[1] = the first parameter on the command line is: %s" % sys.argv[1]
else:
	print "there is nothing other than the program name on the command line"