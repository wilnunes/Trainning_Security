#!/bin/python3
import socket
import informacoes

print("\nLearning Python - Desec Security Trainning\n")

def port_scan():
    ip = input("Insira o IP do alvo: ")
    lista_portas = informacoes.escolher_listaPortas()
    print("Iniciando os scans no IP: ",ip)
    for porta in lista_portas:
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        socket.setdefaulttimeout(0.5)

        if(sock.connect_ex((ip,porta)) == 0):
            print("[=] Porta TCP Aberta: ",porta)
            sock.close()

port_scan()