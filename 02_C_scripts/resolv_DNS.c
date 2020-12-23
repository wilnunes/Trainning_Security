#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main (int argc, char *argv[])
{
	if (argc <= 1){
		printf("Modo de uso: ./resolv_DNS www.businesscorp.com.br\n");
	} else{
			char *alvo;
			alvo = argv[1];
			struct hostent *host;
			host=gethostbyname(alvo);
		if (alvo == NULL){
			printf("Ocorreu um erro :( \n");
		}	else{
				printf("%s ===> %s \n",alvo, inet_ntoa(*((struct in_addr *)host->h_addr)));//transforma em endereco IP
				return 0;
				}
		}
}
