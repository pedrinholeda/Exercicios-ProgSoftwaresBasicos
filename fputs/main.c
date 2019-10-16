#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *pf;
	char string[100];
	if((pf=fopen("arquivo.txt","w")) == NULL){
		printf("\n Nao consigo abrir o arquivo!");
		exit(1);
	}
	do{
		printf("\nDigite uma nova string. Para Terminar, digite <enter>: ");
		gets(string);
		fputs(string,pf);
		putc("\n",pf);
	    if (ferror(pf)){
	    	perror("Erro na gravaçao");
	    	fclose(pf);
	    	exit(1);
		}	
	} while(strlen(string) > 0);
	fclose(pf);
	return 0;
}
