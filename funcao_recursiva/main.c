#include <stdio.h>
#include <stdlib.h>

int fat(int n){
	if(n)
		return n*fat(n-1);
	else return 1;
}

int main(int argc, char *argv[]) {
	int n;
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	printf("\nO fatorial de %d e %d", n,fat(n));
	
	return 0;
}
