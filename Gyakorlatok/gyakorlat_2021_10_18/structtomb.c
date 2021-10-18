#include <stdio.h>
#include <stdlib.h>
typedef struct hallgato{
	char nev [10];
	int bor;
} hallgato;

int foglal_feltolt(hallgato **h, int *meret){
	printf("Mennyi?   "); scanf("%d", meret);
	
	if (!(*h = malloc(sizeof(hallgato) * *meret))) {
		printf("hiba");
		return 1;
	}
	for (int i = 0; i< *meret; i++) {
		scanf("%s", (*h)[i].nev);
		scanf("%d", &(*h)[i].bor);
	}
	return 0;
}
int main(){
	hallgato * h1 = NULL; int meret;
	if(foglal_feltolt(&h1, &meret)){
		printf("hiba");
	}else {
		printf("ok");
	}
	return 0;
}