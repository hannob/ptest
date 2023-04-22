#!/usr/bin/python3

import sys
import re


out = re.match('((a+)b)+', sys.argv[1])

print(out)
