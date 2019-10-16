#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	struct tipo_endereco{
		char rua[50];
		int numero;
		char bairro[20];
		char cidade[30];
		char sigla_estado[3];
		long int CEP;
		};
	struct ficha_pessoal{
		char nome[50];
		long int telefone;
		struct tipo_endereco endereco;
	};
int main(int argc, char *argv[]) {
/*	struct ficha_pessoal ficha;
	strcpy(ficha.nome,"Filipe Souza");
	ficha.telefone = 40028922;
	strcpy(ficha.endereco.rua, "Rua 37");
	ficha.endereco.numero = 10;
	strcpy(ficha.endereco.bairro, "cidade velha");
	strcpy(ficha.endereco.cidade, "Belo Horizonte");
	strcpy(ficha.endereco.sigla_estado, " MG");
	ficha.endereco.CEP = 721588795;
	*/
	
	struct ficha_pessoal *p;
	int a =10;
	p= (struct ficha_pessoal*) malloc (a*sizeof(struct ficha_pessoal));
	p[0].telefone = 40028922;
	free(p);
	return 0;
}
