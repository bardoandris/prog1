#include <stdio.h>
#include <stdlib.h>
int foglal(int *meret, int **szamok);
int main(){
	int n, *szamok;
	if (foglal(&n, &szamok)) {
		printf("gebasz"); 
	}
	free(szamok); // itt nincs sok értelme, mert a  program kilépésekor felszabadul a memória, de ha egy függvényben 
	return 0;
}
int foglal(int *meret, int **szamok){
	printf("Méret:  "); scanf("%d", meret);
	if((*szamok = malloc(*meret * sizeof(int)))){ 
		return 1;
	}
	return 0;
	}