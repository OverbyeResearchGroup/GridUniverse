import gzip
import json

data = json.load(open(r"C:\Users\test\NodeProjects\PowerWeb-RS-electron\src\assets\2019GA.json"))

with gzip.open('data.json.gz', 'wt') as f:
    json.dump(data, f)
