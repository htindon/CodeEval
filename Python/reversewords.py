'''
This programm reverses the words of an input sentence :
Hello world becomes world Hello
I will first write a function that reads from files
'''
def readfile(filename):
	fo = open(filename, "r")
	line = fo.read(100)
	print line
	fo.close()

readfile("test.txt")
