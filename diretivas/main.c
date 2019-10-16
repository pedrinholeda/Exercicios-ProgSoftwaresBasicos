#include <stdio.h>
#include <stdlib.h>
#define max(a,b)((a>b)?(a):(b))
#define min(a,b)((a<b)?(a):(b))

int main(int argc, char *argv[]) {
	int j,f,x,y;
	scanf("\n%d", &j);
	scanf("\n%d", &f);
	
	x = max(j,f);
	y = min(j,f);
	printf("o retorno de max e : %d\n", x);
	printf("o retorno de mix e : %d\n", x);
	return 0;
}
