#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {

	int a, b;
	int secim;
	printf("Sayilari giriniz: ");
	scanf("%d %d", &a, &b);

	printf("ne YApmak istiyorsunuz ?\n1 TOPLA\n2 CIKAR\n3 BOL\n4 CARP\n");
	scanf("%d", &secim);

	if (secim == 1) {
		printf("%d", a + b);
	}
	else if (secim == 2) {
		printf("%d", a - b);
	}
	else if (secim == 3 && b != 0) {
		printf("%d", a / b);
	}
	else if (secim == 4) {
		printf("%d", a*b);
	}
	else {
		printf("sayi 0 a bolunemez , yada yanlýs oparator girdiniz ?");
	}


	

	



	return 0;
}
