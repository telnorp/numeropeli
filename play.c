#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, oikea, uudelleen = 1;

	while (uudelleen == 1) {
		srand(time(0));
		oikea = rand() % 101;
		printf("Tervetuloa peliin.\nArvaa numero 0-100. Sinulla on 5 yritystä. Onnea!\n");

		for (int i = 0; i < 5; i++) {
			printf("Kirjoita numero...\n");

			if (scanf_s("%d", &a) != 1) {
				printf("Vastaus ei ole numero!\n");
				while (getchar() != '\n');
				i--;
				continue;
			}

			if (a < 0 || a > 100) {
				printf("Numero on oltava 0-100.\n");
				i--;
			}
			else if (a < oikea) {
				printf("Liian matala.\n");
			}
			else if (a > oikea) {
				printf("Liian korkea.\n");
			}
			else {
				printf("Oikein!\n");
				break;
			}

			if (i == 4) {
				printf("\nHävisit! Oikea numero oli %d.\n", oikea);
			}
		}

		printf("Paina 1 pelataksesi uudelleen, muu lopettaa...\n");
		while (getchar() != '\n');
		uudelleen = getchar() == '1' ? 1 : 0;
	}

	return 4919;
}
