#include <stdio.h>

int main(){
	
	int x;
	int y;

	int somma;
	int prodotto;
	float media;

	printf("Inserisci x: ");
	scanf("%d", &x);

	printf("Inserisci y: ");
	scanf("%d", &y);

	somma = x + y;
	prodotto = x * y;

	media = (x + y) / 2;

	printf("Somma: %d, Prodotto: %d, Media: %f \n", somma, prodotto, media);

	return 0;
}
