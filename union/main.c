#include <stdio.h>
#include <stdlib.h>
#define GRAUS 'G'
#define RAD 'R'

union angulo {
	
	int graus;
	float radianos;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	union angulo ang;
	char op;
	printf("\nNumeros em graus ou radianos? (G/R): ");
	scanf("%c", &op);
	if(op == GRAUS){
		ang.graus = 180;
		printf("\nAngulo: %d\n", ang.graus);
	}
	else if (op == RAD){
		ang.radianos = 3.1415;
		printf("\nAngulo: %f\n", ang.radianos);
	}
	else printf("\n Entrada invalida!!!\n");
	return 0;
}
	
	

