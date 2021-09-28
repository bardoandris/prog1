#include <stdio.h>

int szorzo();
int filter();
int maximum(int n);

int main(){
	int a; char ujra = '0';
	do {
	a = szorzo();
	a = maximum(a);
	ujra = getchar();
	/*if (ujra == '\n') {
		ujra = getchar();
	}*/
	scanf(" %c", &ujra);
	}while (ujra == 'i');
	return 0;
}

int szorzo(){
	int i, j, sor, oszlop;
	oszlop = filter();
	sor= filter();
	for (i=1; i<=sor; i++) {
		for (j=1; j<=oszlop; j++) {
			printf("%d * %d = %d\t", i, j, i*j);
		}
		printf("\n");
	}
	return sor*oszlop;
}
int filter(){
	int szam, limit = 0;
	do {
		printf("irj be egy pozitiv szamot!");
		scanf("%d", &szam);
	}while (szam <= limit);
	return szam;
}
int maximum(int n){
	int max = 0, szam;
	for (int i = 0; i<n; i++) {
		scanf("%d", &szam);
		if (szam > max) {
			max = szam;
		}
	}
	return max;
}