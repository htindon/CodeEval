#!/usr/bin/ruby

f = File.open(ARGV[0], 'r')
for line in f
	if line.to_i % 2 == 0
		puts 1
	else
		puts 0
	end
end
