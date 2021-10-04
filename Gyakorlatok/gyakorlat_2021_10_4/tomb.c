#include <stdio.h>

void kiir(int *tomb, int n);
void olvas(int *tomb, int n);
void rendez(int *tomb, int n);

int main() {
	int n = 5, tomb[n];
	olvas(tomb, n);
	rendez(tomb, n);	
	kiir(tomb, n);
	return 0;
}

void kiir(int *tomb, int n){
	for (int i = 0; i < n; i++) {
			printf("%d. elem: %d\n", i+1, tomb[i]);
		}
}
void olvas(int *tomb, int n){
	for (int i = 0; i < n; i++) {
			printf("%d. elem: " , i+1);
			scanf("%d", &tomb[i]);
		}
	printf("\n\n");
}
void rendez(int *tomb, int n){
	int i, j, sv, min, minIndex;
	for (i = 0; i < n - 1; i++) {
		for (j = i; j < n; j++) {
			if (j == i || tomb[j] < min) {
					min = tomb[j]; minIndex = j;
			}
			if (i != minIndex) {
				sv = tomb[i];
				tomb[i] = tomb[minIndex];
				tomb[minIndex] = sv;
			}
		}
	}
}

