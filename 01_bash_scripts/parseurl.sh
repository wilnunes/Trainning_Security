#!/bin/bash
if [ "$1" == "" ]
then
echo "Analisador de URL"
echo "./parseurl.sh sitealvo.com.br"
else
echo "Url a ser verificada .... = " "$1"
wget -q "$1"
echo "###################################################################"
echo "Buscando Hosts ----->>>>>"
echo "###################################################################"
grep href index.html | cut -d "/" -f 3 | grep "\." | cut -d '"' -f 1 | grep -v "<li"> lista
cat lista
echo "###################################################################"
echo "Resolvendo Hosts --->>>>>"
echo  "##################################################################"
for url in $(cat lista);do
host $url;done | grep "has address"
#rm index.html
fi
