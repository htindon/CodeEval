import sys

f = open(sys.argv[1], 'r')
for line in f:
	print line.swapcase().strip()
f.close()
