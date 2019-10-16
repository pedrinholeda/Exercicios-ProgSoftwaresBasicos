#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char string[100];
	int i;
	fp=fopen("arquivo.txt","w"); //arquivo ASCII,PARA ESCRRITA
	if(!fp)
	{
		printf("Erro na abertura do arquivo");
		exit(0);
	}
	printf("Entre com a string a ser gravada no arquivo: ");
	gets(string);
	for(i=0;string[i];i++)putc(string[i],fp);
	fclose(fp);
	return 0;
}
