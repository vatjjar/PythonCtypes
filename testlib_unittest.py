#!/usr/bin/python

import ctypes

lib = ctypes.CDLL("./libtestlib.so")

print "init:    %d" % lib._Z4initv()
print "store:   %d" % lib._Z5storei(5)
print "get:     %d" % lib._Z3getv()
print "clear:   %d" % lib._Z5clearv()
print "edstroy: %d" % lib._Z7destroyv()

