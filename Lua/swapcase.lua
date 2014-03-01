#!/usr/local/bin/lua

function swapcase(line)
  local result = ''
    for c in line:gmatch"." do
      if c >= 'a' and c <= 'z' then
        result = result .. string.upper(c)
      elseif c >= 'A' and c <= 'Z' then
        result = result .. string.lower(c)
      else
        result = result .. c
      end
    end
  print (result)
end

local f = assert(io.open(arg[1], "r"))
while true do
  local line = f:read("*line")
  if not line then 
    break
  else 
    swapcase(line)
  end
end
