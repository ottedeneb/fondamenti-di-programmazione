#include <stdio.h>

int main(){
    
    int numero, centinaia, decine, unita;

    printf("Inserisci un numero compreso tra 100 e 999: ");
    scanf("%d", &numero);

    centinaia = numero / 100;
    printf("Cifra centinaia: %d \n", centinaia);


    decine = numero / 10 % 10;
    printf("Cifra decine: %d \n", decine);

    unita = numero % 10;
    printf("Cifra unità: %d \n", unita);

    return 0;
}