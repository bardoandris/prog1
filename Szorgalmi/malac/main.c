#include <stdio.h>
#include "functions.h"

int main(){
	
	zoldseg z1, z2; //z1 krumpli, z2 répa
	float sohat, fehhat, szenhat; int menny;
	initzoldseg(&z1, &z2);
	inithatar(&sohat, &fehhat, &szenhat, &menny);
	
	return 0;
}