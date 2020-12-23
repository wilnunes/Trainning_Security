#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netdb.h>

int main(int argc, char *argv[])
{

	char *alvo;
	alvo = argv[1];
	struct hostent *host;

	char *result;
	char txt[50];
	FILE *rato; // * corresponde a um ponteiro
	rato = fopen(argv[2],"r");//lendo um arquivo - pegando o argumento 2 que sera a lista rato.txt

	if(argc < 2)
	{
	printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|.. DNSRATO v1.0 ..-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	printf("|-|-|-|-|-|-|-|.. Uso: ./dnsrato alvo.com.br rato.txt-|-|-|-|-|-|-|-|-|\n");
	printf("|-|-|-|-|-| Ricardo Longatto -- ricardolongatto@gmail.com |-|-|-|-|-|-|\n");
	printf("|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|\n");
	return(0);
	}

	while(fscanf(rato, "%s", &txt) != EOF)
	{

	result = (char *) strcat(txt,alvo);//concatena o alvo com o txt
	host=gethostbyname(result);
		if(host == NULL)
		{
		continue;
		}
		printf("HOST ENCONTRADO: %s ====> IP: %s \n",result,inet_ntoa(*((struct in_addr *)host->h_addr)));
	}
}
