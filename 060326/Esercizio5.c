#include <stdio.h>

int main(){
	float paga_oraria;

	float ore_mensili;
	
	float stipendio, stipendio_finale;

	printf("Inserisci la paga oraria: ");
	scanf("%f", &paga_oraria);

	printf("Inserisci le ore mensili: ");
	scanf("%f", &ore_mensili);

	stipendio = paga_oraria * ore_mensili;

	stipendio_finale = stipendio - stipendio * 0.18;

	printf("Lo stipendio è: %f \n", stipendio_finale);


	return 0;
}
