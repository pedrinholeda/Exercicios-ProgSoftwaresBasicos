#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void cadastrarAluno(struct Aluno aluno){
	FILE *pf;
	if((pf=fopen("alunos.txt","w")) == NULL){
		printf("\n Nao consigo abrir o arquivo!");
		exit(1);
	}
		printf("\nDigite o nome do aluno");
		gets(aluno.nome);
		fputs(aluno.nome,pf);
		putc("\n",pf);
		printf("\nDigite o a matricula do aluno");
		gets(aluno.nome);
		fputs(aluno.matricula,pf);
		putc("\n",pf);
	    if (ferror(pf)){
	    	perror("Erro na gravaçao");
	    	fclose(pf);
	    	exit(1);
		}	

	
}
void excluirAluno(){
}
void alterarAluno(){
}
void consultarAluno(){
}
void menu(){
	int valor;
do{
 system("cls");
 printf ("\n*=====================*");
 printf ("\n| 1- Cadastar Aluno   |");
 printf ("\n| 2- Consultar Aluno  |");
 printf ("\n| 3- Alterar Aluno    |");
 printf ("\n| 4- Excluir Aluno    |");
 printf ("\n| 5- Digite para sair |");
 printf ("\n*=====================*");
 
 printf ("\n\nEscolha uma Opcao: ");
 scanf("\n\n%d", &valor);
  
  switch ( valor )
  {
    case 1 :
    printf ("\nCadastar Aluno\n");
    struct Aluno x;
    cadastrarAluno(x);
    break;
    
    case 2 :
    printf ("\nConsultar Aluno\n");
    consultarAluno();
    break;
    
    case 3 :
    printf ("\nAlterar Aluno\n");
    alterarAluno();
    break;
    
    case 4 :
    printf ("\nExcluir Aluno\n");
    excluirAluno();
    break;
    
    case 5 :
    printf ("\nFIM DO PROGRAMA\n");
    //return 0;
    break;
      
    default :
    system("cls"); 
    printf ("\nOpcao nao encontrada.\n");
    printf ("\nTente novamente, pressionando qualquer tecla. \n\n\n\n\n"); 
	system("pause");   
  } 	
 } while (valor > 5);
}

int main(int argc, char *argv[]) {
	
menu();	
	

}
