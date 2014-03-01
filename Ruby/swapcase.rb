f = File.open(ARGV[0], 'r')
for line in f
	puts line.swapcase
end
f.close
