#!/usr/bin/python3

import sys
import os

def writetofile(fn, text):
    f = open(fn, "w")
    f.write(text)
    f.close()
    os.chmod(fn, 0o0600)


writetofile("secret.txt", sys.argv[1])
