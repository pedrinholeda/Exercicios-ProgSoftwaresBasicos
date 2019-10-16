#include <stdio.h>
#include <stdlib.h>
#define linha 20
#define coluna 10

int main(int argc, char *argv[]) {
	int mtrx [linha][coluna];
	int i,j,count;
	count = 1;
	
	for(i=0;i<20;i++){
		for(j=0;j<10;j++){
			mtrx[i][j] = count;
			count++;
		}
	}
	printf ("Matriz: ");
	 printf ("%d", mtrx[ i ][ j ]);
	return 0;
	
}
