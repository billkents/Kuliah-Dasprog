#include <stdio.h>

int main() {
	int Biner, bobot, bit, Desimal;
	bobot = 1;
	Desimal = 0;

	printf("Masukkan bilangan: ");
	scanf("%d", &Biner);

	while(Biner>0) {
		bit = Biner%10;
		Desimal = Desimal + (bit*bobot);
		Biner = Biner/10;
		bobot = bobot*2;
	}
	
	printf("%d", Desimal);

	return 0;
}
