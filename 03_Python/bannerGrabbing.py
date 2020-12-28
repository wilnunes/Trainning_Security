#!/usr/bin/python
import socket,sys

print "[++]       Cliente TCP em Python          [++]"
print "[++]  DESEC Security Treinamento          [++]"
print "##############################################"

meusocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

if len(sys.argv) <= 2:
	print "Modo de uso = ./tcpkey.py 10.10.10.1 8080"
else:
	porta = int(sys.argv[2])
	if meusocket.connect_ex((sys.argv[1],porta)) == 0:
		print "[++] Conectando ao Servidor",sys.argv[1]," ! [++]"
		print "##############################################"
		banner = meusocket.recv(1024)
		print "[++] Chave encontrada : "
		print banner
		meusocket.close()
	else:
		print "Porta Fechada"
