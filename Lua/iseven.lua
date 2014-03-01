#!/usr/local/bin/lua

local f = assert(io.open(arg[1], "r"))
while true do
  local line = f:read("*line")
  if not line then break end
  if line % 2 == 0 then print (1)
  else print (0)
  end
end
