#!/bin/bash
cat "$1" | grep "177.138.28.7" | cut -d '"' -f2 | uniq -c