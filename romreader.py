#!/usr/bin/python3

from subprocess import call

with open('rom.ascii') as source:
    contents = [x.strip() for x in source.readlines()]

call('./romwriter ' + ' '.join(contents))
