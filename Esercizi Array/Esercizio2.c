/*
2. Si supponga che l’utente inserisca 2 array di 6 elementi. Verificare che i due array siano uguali elemento per elemento.
*/

#include <stdio.h>
#define SIZE 4

int main(void)
{
    int array_a[SIZE];
    int array_b[SIZE];

    int uguali = 1;
    size_t i = 0;

    printf("Inserisci i valori del primo array: \n");
    for(int i = 0; i < SIZE; i++){
        int valore;
        scanf("%d", &valore);
        array_a[i] = valore;
    }

    printf("Inserisci i valori del secondo array: \n");
    for(int i = 0; i < SIZE; i++){
        int valore;
        scanf("%d", &valore);
        array_b[i] = valore;
    }


    while (i < SIZE && uguali == 1)
    {
        if (array_a[i] != array_b[i])
        {
            uguali = 0;
        }
        i++;
    }
    if (uguali == 0)
    {
        printf("Gli array non sono uguali\n");
    }
    else
    {
        printf("Gli array sono uguali\n");
    }
    return 0;
}