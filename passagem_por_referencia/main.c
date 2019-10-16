#include <stdio.h>
#include <stdlib.h>


void swap(int *el1, int *el2){
	int temp;
	temp = *el1;
	*el1 = *el2;
	*el2 = temp;
	printf("\nendereco de el1: %p\n \nendereco de el2 : %p\n", el1,el2);
}
int main(int argc, char *argv[]) {
	int a=10,
	b=20;
	printf("\n endereco de a: %p\n endereco de b: %p\n", &a,&b);
	void swap(int *, int*);
	printf("a=%d, b=%d\n", a,b);
	swap(&a,&b);
	printf("a=%d, b=%d\n", a,b);
	return 0;
}
