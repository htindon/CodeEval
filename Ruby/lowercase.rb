f = File.open(ARGV[0], 'r')
for line in f
	puts line.downcase
end
f.close
