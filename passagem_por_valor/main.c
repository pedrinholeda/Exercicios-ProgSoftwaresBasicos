#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=10,
	b=20;
	
	void swap_err(int,int);
	printf("a=%d, b=%d\n", a,b);
	swap_err(a,b);
	printf("a=%d, b=%d\n", a,b); 
		return 0;
 }
void swap_err(int el1, int el2){
	int temp;
	temp = el1;
	el1=el2;
	el2 = temp;
	printf("el1=%d, el2=%d\n", el1,el2); 
}


