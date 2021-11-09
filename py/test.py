import json

config = json.loads(open('datafields.json').read())
for ele in config.keys():
    config[ele]['Object'] = []
print(config)

