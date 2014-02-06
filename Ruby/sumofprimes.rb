def isprime(n)
	i = 2
	while i < n
		if n % i == 0
			return (-1)
		end
		i += 1
	end
	return (0)
end

def main()
	n = 2
	i = 0
	sumofprimes = 0
	while i < 1000
		if isprime(n) == 0
			i += 1
			sumofprimes += n
		end
		n += 1
	end
	puts sumofprimes
	return (0)
end

main()
