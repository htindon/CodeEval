#!/usr/local/bin/lua

local f = assert(io.open(arg[1], "r"))
local sum = 0
while true do
  local line = f:read("*line")
  if not line then break end
  sum = sum + line
end
io.input():close()
print (sum)
