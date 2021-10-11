#include <stdio.h>

void valtoztat(int *par){
	*par+=1;
}

int main(){
	int i, n = 5, tomb[n];
	for (i=0; i<n; i++) {
		scanf("%d",&tomb[i]);
	}
	printf("\n\n");
	for (i=0; i<n; i++) {
		printf("%d\n", tomb[i]);
	}
	
	return 0;
}