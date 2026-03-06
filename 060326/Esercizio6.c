#include <stdio.h>


float calcolo_stipendio(float ore_mese, float paga_oraria){
	float stipendio_netto;

	float stipendio_finale;

	stipendio_netto = ore_mese * paga_oraria;

	stipendio_finale = stipendio_netto - stipendio_netto * 0.18;
	
	printf("%f \n", stipendio_finale);

	return stipendio_finale;
}


int main(){
	int dipendenti;

	printf("Inserisci il numero di dipendenti: ");

	scanf("%d", &dipendenti);

		for(int i = 0; i < dipendenti; i++){
			float ore;
			float paga;
			printf("Paga oraria: ");
			scanf("%f", &ore);

			printf("Ore mensili: ");
			scanf("%f", &paga);
		
			calcolo_stipendio(ore, paga);


	}
	return 0;
}


