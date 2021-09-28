#include<stdio.h>
int main(){
	int i=1,j,oszlop= 5, sorok = 6;
	for (i=1; i<=sorok; i++) {
		for (j = 1; j<=oszlop; j++) {
			printf("%d * %d = %d\t", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}