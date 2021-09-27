#include <stdio.h>
int main(){
	int oszto;
	printf("%d\n",(oszto = 2009/2));
	for (; oszto>=1; oszto--) {
		if (2009 % oszto == 0) {
			printf("%d A legnagyobb oszto\n", oszto);
			printf("%d * %d = 2009", oszto, 2009 / oszto);
			break;
		}
	}
}