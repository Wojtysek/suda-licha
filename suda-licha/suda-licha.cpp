#include <stdio.h>

int main(void) {

	int hodnota;
	int volba;
	int suda = 0;
	int licha = 0;
	//zadani cisla a programu
	printf("hodnota: ");
	scanf_s("%d", &hodnota);
	printf("vyberte program\n");
	printf("1) suda \n2) licha");
	printf("\n");
	scanf_s("%d", &volba);

	if (volba == 1) { //soucet sudych cisel

		for (int i = 0; i <= hodnota; i++) {
			if (i % 2 == 0) {
				suda = suda + i;
			}
		}
		printf("\nsoucet sudych cisel: %d", suda);
	}
	else {

	}
}