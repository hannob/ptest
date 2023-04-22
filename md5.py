#!/usr/bin/python3

import hashlib
import sys

res = hashlib.md5(sys.argv[1].encode())

print(res.hexdigest())
