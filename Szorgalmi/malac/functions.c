#include "functions.h"
#include <stdio.h>
zoldseg beker(){
	zoldseg z;
	printf("Kérem adja meg százalékban a következőket!\n");
	printf("kérem a szénhidrátot\n");
	scanf("%f", &z.szen);
	printf("kérem a fehérjét\n");
	scanf("%f", &z.feh);
	printf("kérem a sótartalmat!\n");
	scanf("%f", &z.feh);
	printf("Végül kérem az árát (dollár)!\n");
	scanf("%f", &z.ar);
	z.szen/=100;
	z.feh/=100;
	z.so/=100;
	
	return z;
}

float hatarertek(char *fajta){
	float ertek;
	printf("kérem a %st!", fajta);
	scanf("%f", &ertek);
	return ertek;
}
void initzoldseg(zoldseg *z1, zoldseg *z2){
	char def = 'i';
	printf("Szeretné, hogy az alapértelmezett értékekkel számoljak? i/n");
	scanf("%c", &def);
	switch (def){
		case 'n':
			*z1 = beker(),
			*z2 = beker();
	
		break;
		default:
			z1->so = 0.02f;
			z1->feh = 0.03f;
			z1->szen = 0.15f;
			z1->ar = 100;
			z2->so = 0.02f;
			z2->feh = 0.01f;
			z2->szen = 0.10f;
			z2->ar = 50; 
			break;
		}
}
void inithatar(float *sohat, float *fehhat, float *szenhat, int *menny){
	char def = 'i';
	printf("Szeretné, hogy az alapértelmezett értékekkel számoljak? i/n\n");
	scanf("%c", &def);
	switch (def) {
	case 'n':
	printf("Kérem adja meg tonnában a következőket!\n");
	printf("Kérem a só határát!\n");
	scanf("%f", sohat);
	printf("Kérem a fehérje mennyiségét!\n");
	scanf("%f", fehhat);
	printf("Kérem a szénhidrát mennyiségét!\n");
	scanf("%f", szenhat);
	printf("Kérem a malacok darabszámát!\n");
	scanf("%d", menny);
	break;

	default:
	*fehhat = 0.3;
	*sohat = 0.5; 
	*szenhat = 2.25;
	printf("Kérem a malacok darabszámát!\n");
	scanf("%d", menny);
	break;
	}
}
float z2_megoldas(zoldseg z1, zoldseg z2, igeny ig){
	return ((ig.szen*ig.menny) - ((ig.menny*ig.feh) * z1.feh / z1.szen))/ //feladat.txt line 14
				(z2.feh-z2.feh*z1.feh/z1.szen);
}
float z1_megoldas(zoldseg z1, zoldseg z2, igeny ig){
	return ((ig.szen*ig.menny) - ((ig.menny*ig.feh) * z2.feh / z2.szen))/ //feladat.txt line 16
				(z1.feh - z2.feh * z1.feh / z2.szen);
}
int so_ellenor(zoldseg z1, zoldseg z2, igeny ig){
	float total_so = z1.so * z1.menny + z2.so * z2.menny;
	if (total_so > ig.so * ig.menny) {
	printf("A megadott feltételek mellett nem lehet sóhatár túllépése nélkül etetni!");
	return 0;
	}
	printf("Sikeresen összeállított etetés!\n %ft répa, illetve %ft burgonya\n", z2.menny, z1.menny);
	return 1;
}