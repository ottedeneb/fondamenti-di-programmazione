#include <stdio.h>

int main(){
	int ore, minuti, secondi;
	int risultato;

	printf("Inserisci le ore: ");
	scanf("%d", &ore);
	
	printf("Inserisci i minuti: ");
	scanf("%d", &minuti);
	
	printf("Inserisci i secondi: ");
	scanf("%d", &secondi);

	risultato = ore * 60 * 60 + minuti * 60 + secondi;

	printf("%d \n", risultato);
	
	return 0;

}
