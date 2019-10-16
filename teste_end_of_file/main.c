#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char c;
	fp=fopen("pedro.txt","r");
	if(!fp){
		printf("Erro na abertura do arquivo");
		exit(0);
	}
	printf("Arquivo aberto: ");
	printf("\n\n");
	while((c=getc(fp)) != EOF)	
	printf("%c", c);

	fclose(fp);
	
	return 0;
}
