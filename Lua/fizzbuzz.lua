#!/usr/local/bin/lua

local f = assert(io.open(arg[1], "r"))
while true do
  local n1, n2, n3 = f:read("*number", "*number", "*number")
  if not n1 then break end
  local result = ''
  local n = 0
  while n < n3 do
    n = n + 1
    if (n % n1 == 0) then result = result .. "F" end
    if (n % n2 == 0) then result = result .. "B" end
    if (n % n1 ~= 0 and n % n2 ~= 0) then result = result .. n end
    result = result .. ' '
  end
  print (string.sub(result, 1, -2))
end
f:close()