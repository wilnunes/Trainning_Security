#!/usr/bin/python
import socket, sys

if len(sys.argv) <= 2:
	print "Modo de uso: ./portscanargumento.py 10.10.10.1"
else:
	for porta in range(1,65535):
		s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
#SOCKET_STREAM = TCP
	if s.connect_ex((sys.argv[1], porta)) == 0:
		print "Porta",porta,"[ABERTA]"
		s.close()
