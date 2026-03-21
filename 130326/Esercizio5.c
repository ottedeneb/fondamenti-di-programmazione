#include <stdio.h>

int main(){

    char lettera, nuova_lettera;
    int spostamento;

    printf("Inserisci un carattere maiuscolo tra A e Z: ");
    scanf("%c", &lettera);

    printf("Inserisci un numero tra 1 e 25: ");
    scanf("%d", &spostamento);

    lettera -= 65;
    lettera += spostamento;
    lettera %= 26;

    nuova_lettera = lettera + 65;

    printf("Il nuovo carattere è %c \n", nuova_lettera);
    
    return 0;
}