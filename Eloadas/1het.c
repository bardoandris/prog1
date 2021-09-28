#include<stdio.h>

int main(){
	int i=1,j, sorok = 11;
	for (i=1; i<=sorok; i++) {
		for (j = 1; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}