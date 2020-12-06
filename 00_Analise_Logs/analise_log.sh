#!/bin/bash
# analise de logs do arquivo access.log
cat "$1" | cut -d " " -f1 | sort | uniq -c | sort -un