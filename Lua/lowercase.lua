#!/usr/local/bin/lua

function lowercase(line)
  local result = ''
    for c in line:gmatch"." do
      result = result .. string.lower(c)
    end
  print (result)
end

local f = assert(io.open(arg[1], "r"))
while true do
  local line = f:read("*line")
  if not line then 
    break
  else 
    lowercase(line)
  end
end
