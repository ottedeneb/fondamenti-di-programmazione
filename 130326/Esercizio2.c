#include <stdio.h>

int main(){
    float distanza, v;
    int ore, minuti, conversione_secondi;

    printf("Inserire una distanza (km): ");
    scanf("%f", &distanza);

    printf("Inserisci le ore: ");
    scanf("%d", &ore);

    printf("Inserisci i minuti: ");
    scanf("%d", &minuti);

    conversione_secondi = ore * 60 * 60 + minuti * 60;

    distanza *= 1000;

    v = distanza / conversione_secondi;

    v *= 3.6;

    printf("La velocità media è: %.2f km/h\n", v);

    return 0;
}