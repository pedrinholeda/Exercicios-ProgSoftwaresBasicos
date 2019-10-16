#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct tipo_endereco
{
	char rua[50];
	int numero;
	char cidade[30];
	char bairro[30];
	char uf[3];
	long int cep;
};
struct ficha_pessoal
{
	char nome[50];
	long int telefone;
	struct tipo_endereco endereco;
};

int main(int argc, char *argv[]) {
	struct ficha_pessoal ficha;
	strcpy(ficha.nome, "Pedro Henrique");
	ficha.telefone= 40028922;
	strcpy(ficha.endereco.rua, "Rua das Flores");
	ficha.endereco.numero=10;
	strcpy(ficha.endereco.bairro, "Flores velhas");
	strcpy(ficha.endereco.cidade, "Belo Horizonte");
	strcpy(ficha.endereco.uf, "MG");
	ficha.endereco.cep=31323233;
	return 0;
}
