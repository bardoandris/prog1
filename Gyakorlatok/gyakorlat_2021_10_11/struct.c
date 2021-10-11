#include <stdio.h>

typedef struct hallgato{
	char nev[20];
	int evfolyam, penz;
}hallgato;

void beolvas(hallgato *h, int hossz);
void kiir(hallgato *h, int hossz);

int main(){
	int n = 3; hallgato emberek[n];
	beolvas(emberek, n);
	kiir(emberek, n);
	/*scanf("%s", bela.nev);
	scanf("%d", &bela.evfolyam);
	scanf("%d", &bela.penz);
	printf("Név: %s,\t Évfolyam:%d\t Pénz:%d", bela.nev, bela.evfolyam, bela.penz);*/
}

void beolvas(hallgato *h, int hossz){
	for (int i = 0; i< hossz; i++) {
		printf("Név, évfolyam, pénz\n");
		scanf("%s", h[i].nev);
		scanf("%d", &h[i].penz);
		scanf("%d", &h[i].evfolyam);
	}
}
void kiir(hallgato *h, int hossz){
	for (int i = 0; i< hossz; i++) {
		printf("Név:%s, évfolyam: %d, pénz: %d\n", h[i].nev, h[i].evfolyam, h[i].penz);
	}
}