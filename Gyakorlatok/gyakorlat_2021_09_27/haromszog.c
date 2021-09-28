#include <stdio.h>

void ellenor(int* oldalak);

int main(){
	int n=3, oldalak[n];
	for (int i=0; i<n; i++) {
		scanf("%d", &oldalak[i]);
		}
	ellenor(oldalak);
	return 0;
}

void ellenor(int* oldalak){
	if (oldalak[0] + oldalak[1] > oldalak[2] &&
		 oldalak[1] + oldalak[2] > oldalak[0]&&
		 oldalak[0] + oldalak[2] > oldalak[1]) {
			 printf("Ez a haromszog lehetseges");
	}
	else {
		printf("Ez a haromszog nem lehetseges");
	}
}