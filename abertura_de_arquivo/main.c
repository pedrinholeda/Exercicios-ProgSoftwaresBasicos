#include <stdio.h>
#include <stdlib.h>
int main()
{
FILE *pf;
float pi = 3.1415;
float pilido;
if((pf = fopen("arquivo.bin", "wb")) == NULL) /* Abre arquivo bin�rio para escrita */
{
printf("Erro na abertura do arquivo");
exit(1);
}
if(fwrite(&pi, sizeof(float), 1,pf) != 1)     /* Escreve a vari�vel NUM | o operador sizeof, que retorna o tamanho em bytes da vari�vel ou do tipo de dados. */
printf("Erro na escrita do arquivo");
fclose(pf);                                    /* Fecha o arquivo */
if((pf = fopen("arquivo.bin", "rb")) == NULL) /* Abre o arquivo novamente para leitura */
{
printf("Erro na abertura do arquivo");
exit(1);
}
if(fread(&pilido, sizeof(float), 1,pf) != 1) /* Le em pilido o valor da vari�vel armazenada anteriormente */
printf("Erro na leitura do arquivo");
printf("\nO valor de NUM, lido do arquivo e: %f \n\n", pilido);
fclose(pf);
return(0);
}
