#!/bin/bash
echo -e '\033[46;1;1;5m Hosts Ativos na rede!!! \033[m'
if [ "$1" == "" ]
then
    echo "DESEC SECURITY - PING SWEEP"
    echo -e '\033[31m Modo de uso: sh pingnet.sh $0 REDE \033[m'
    echo "Exemplo: 0$ 192.168.0"
else
for host in {1..254};
do
ping -c 1 $1.$host | grep "TTL" | cut -d " " -f 3 | sed 's/.$//'; # elimina o ultimo campo por vazio
done
fi

