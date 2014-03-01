#!/usr/bin/ruby

f = File.open(ARGV[0], 'r')
sum = 0
for line in f
	sum += line.to_i
end
f.close
puts sum
