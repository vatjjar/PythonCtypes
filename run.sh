#!/bin/bash

echo "Running unit test with natice C implementation:"
LD_LIBRARY_PATH=./ ./testlib_unittest

echo ""
echo "Running unit test with Python implementation:"
python testlib_unittest.py

