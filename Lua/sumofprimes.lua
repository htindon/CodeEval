#!/usr/local/bin/lua

function isprime(n)
  local i = 2
  while i < n do
    if n % i == 0 then return (-1) end
    i = i + 1
  end
  return (0)
end

local n = 2
local i = 0
local sumofprimes = 0
while i < 1000 do
  if isprime(n) == 0 then
    i = i + 1
    sumofprimes = sumofprimes + n
  end
  n = n + 1
end
print (sumofprimes)
