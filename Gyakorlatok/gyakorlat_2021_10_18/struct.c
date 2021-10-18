#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, *szamok;
	printf("n?:  ");
	scanf("%d", &n);
	if (szamok == NULL) {printf("Hiba"); exit(1);}
	szamok = (int *)malloc(sizeof(int) * n);
	for (int i= 0; i<n; i++) {
		scanf("%d", &szamok[i]);
		printf("%d\n", szamok[i]);
	}
	return 0;
}