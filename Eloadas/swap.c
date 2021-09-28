#include <stdio.h>
int main(){
	int sv, n = 5, tomb[] = {5,4,3,2,1};
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j<n; j++) {
			if (tomb[j]<tomb[i]) {
				sv = tomb[i];
				tomb[i] = tomb[j];
				tomb[j] = sv;
			}
		}
	}
	for (int i = 0; i<n; i++) {
		printf("%d\n", tomb[i]);
		}
	/*int a= 1, b=2, temp;
	temp=b;
	b=a;
	a= temp;
	printf("a= %d, b= %d", a, b);
	*/
	return 0;
}