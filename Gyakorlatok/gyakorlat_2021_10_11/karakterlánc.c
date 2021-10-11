#include <stdio.h>

int hossz(char *tomb);
void masol(char *t, char *cop);

int main(){
	int n = 10; char szoveg[n], szoveg2[n]; int charhossz;
	scanf("%s", szoveg);
	masol(szoveg, szoveg2);
	printf("%s\n", szoveg);
	printf("%s\n", szoveg2);

	return 0;
}
int hossz(char *tomb){
	int n = 0;
	while (tomb[n] != 0) {
	n++;
	}	
	return n;
}
void masol(char *t, char *cop){
	int i = 0;
	while (t[i] != 0) {
		cop[i] = t[i]; 
		i++;
	}
	cop[i] = 0;	//záróbájt
}