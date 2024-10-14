#include <stdio.h>

int main() {
	int N, i, faktor;

	printf("Masukkan : ");
	scanf("%d", &N);

	for (i=1; i<=N; i++) {
		if (N%i == 0) {
			faktor = faktor + 1;
		}
	}
	if (faktor>2) {
		printf("Bukan prima");
	}
	else if (faktor<=2) {
		printf("Prima");
	}

	return 0;
}
