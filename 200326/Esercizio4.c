#include <stdio.h>

int main(){
    char carattere;

    printf("Inserisci un caratere: ");

    scanf(" %c", &carattere);

    if(carattere >= 65 && carattere <= 90){
        carattere += 32;
    }
    if(carattere >= 97 && carattere <= 122){
        switch (carattere){
            case 97:
                printf("%c è una vocale\n", carattere);
                break;
            case 101:
                printf("%c è una vocale\n", carattere);
                break;
            case 105:
                printf("%c è una vocale\n", carattere);
                break;
            case 111:
                printf("%c è una vocale\n", carattere);
                break;
            case 117:
                printf("%c è una vocale\n", carattere);
                break;      
            default:
                printf("%c non è una vocale\n", carattere);
                break;
        }
    }


    return 0;
}