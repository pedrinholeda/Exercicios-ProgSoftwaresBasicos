#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	fp=fopen("aula7.txt", "r");
	if(!fp){
		printf("Erro na abertura do programa. fim");
		exit(1);
	}
	printf("ponteiro: %p", *fp);
	return 0;
}
