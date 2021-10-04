#include <stdio.h>

void novel(int* v);

int main(){
	int a = 1;
	int* pointer;	// egy integerre mutató cím, a csillag a mutató voltát jelöli
	pointer = &a;	// a pointer az a változó helyére mutat, az & a cím-operátor
	//*pointer = 2;	// itt a csillag a dereferencia operátor: a poointert követi
	novel(pointer);	// a pointerben tárolt címet adjuk át a függvénynek
	printf("%d\n", a);
	return 0;
}


void novel(int* v){	// egy változóra mutató pointert kap
	*v+=1;	// a "v" címén található változót növeli
}

