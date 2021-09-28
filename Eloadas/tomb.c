#include<stdio.h>

int main(){
	int n=5, tomb[n], sum =0, max, maxindex;
	for (int i=0; i<n; i++) { // beolvasás
		scanf("%d", &tomb[i]);
	}
	for (int i=0; i<n; i++) { // kiírás
		printf("%d elem: %d\n", i+1, tomb[i]);
	}
	for (int i=0; i<n; i++) { //összeg -- átlag
		sum += tomb[i];
	}
	printf("atlag: %.2f\n", (float)sum / n);
	max= tomb[0];
	for (int i=1; i<n; i++) { // maximum
		if (tomb[i]> max) {
			max = tomb[i];
			maxindex= i;
		}
	}
	printf("max: %d", max);
	return 0;
}