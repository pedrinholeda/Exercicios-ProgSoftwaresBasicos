#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int count = 10;
	int *pt;
	pt = &count;
	
	printf("\n%p",&count);
	printf("\n%p",pt);
	printf("\n%d",*pt);
	
	printf("\n\n///////////////////////////////\n");
	
	count = 15; 
	
	printf("\n%p",&count);
	printf("\n%p",pt);
	printf("\n%d",*pt);
	
	void batata(){
	count = 35;
	printf("\n\n///////////////////////////////\n");
	printf("\n%p",&count);
	printf("\n%p",pt);
	printf("\n%d",*pt);
	}
	
	
	batata();
	
	printf("\n\n///////////////////////////////\n");
	printf("%d", count);
	
	return 0;
	
	
}
