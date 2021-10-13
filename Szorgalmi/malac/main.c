#include <stdio.h>
#include "functions.h"

int main(){
	igeny ig;
	zoldseg z1, z2; //z1 krumpli, z2 répa
	while (1){
		initzoldseg(&z1, &z2);
		inithatar(&ig.so, &ig.feh, &ig.szen, &ig.menny);
		z1.menny = z1_megoldas(z1, z2, ig);
		z2.menny = z2_megoldas(z1, z2, ig);
		if (so_ellenor(z1, z2, ig)){
			break;
		}
	}
	return 0;
}