#include <stdio.h>

int main(){
    float a, b, risultato;
    char operatore;

    printf("Inserisci il primo numero: ");
    scanf("%f", &a);

    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    
    printf("Inserisci l'operatore (+, -, *, /): ");
    scanf(" %c", &operatore);

    if(operatore == '+'){
        risultato = a + b;
        printf("Il risultato è: %.3f\n", risultato);
    }
    else if(operatore == '-'){
        risultato = a - b;
        printf("Il risultato è: %.3f\n", risultato);
    }
    else if(operatore == '*'){
        risultato = a * b;
        printf("Il risultato è: %.3f\n", risultato);
    }
    else if(operatore == '/'){
        risultato = a / b;
        printf("Il risultato è: %.3f\n", risultato);
    }

    return 0;
}


