# http://docs.python.org/2/library/json.html
import json
command = {
  "function": 0,
  "parameter": 10.00
}
command_json = json.dumps(command)
print command_json  
