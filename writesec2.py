#!/usr/bin/python3

import sys
import os

def writetofile(fn, text):
    f = open(fn, "w")
    os.chmod(fn, 0o0600)
    f.write(text)
    f.close()


writetofile("secret.txt", sys.argv[1])
