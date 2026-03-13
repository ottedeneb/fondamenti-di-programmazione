#include <stdio.h>

int main(){

    int importo_iniziale, importo_rimanente, moneta;

    printf("Inserisci un importo in centesimi: ");
    scanf("%d", &importo_iniziale);

    moneta = importo_iniziale / 50;
    printf("Moneta da 50: %d \n", moneta);
    importo_rimanente = importo_iniziale % 50;


    moneta = importo_rimanente / 20;
    printf("Moneta da 20: %d \n", moneta);
    importo_rimanente = importo_rimanente % 20;


    moneta = importo_rimanente / 10;
    printf("Moneta da 10: %d \n", moneta);
    importo_rimanente = importo_rimanente % 10;


    moneta = importo_rimanente / 5;
    printf("Moneta da 5: %d \n", moneta);
    importo_rimanente = importo_rimanente % 5;


    moneta = importo_rimanente / 2;
    printf("Moneta da 2: %d \n", moneta);
    importo_rimanente = importo_rimanente % 2;


    moneta = importo_rimanente / 1;
    printf("Moneta da 1: %d \n", moneta);
    importo_rimanente = importo_rimanente % 1;

    return 0;
}