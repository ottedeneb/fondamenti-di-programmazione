/*
Si supponga che l’utente inserisca due array. Creare altri tre array in modo tale che essi contengano i valori minimi, massimi e medi degli elementi di posizione corrispondente e stamparne i valori.
*/


#include <stdio.h>
#define SIZE 3


int main(void)
{
    int array_a[SIZE];
    int array_b[SIZE];

    float media[SIZE];
    int massimo[SIZE], minimo[SIZE];


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

    if(array_a[0] > array_b[0]){
        massimo[0] = array_a[0];
        minimo[0] = array_a[0];
    }else{
        massimo[0] = array_b[0];
        minimo[0] = array_a[0];
    }


    if(array_a[1] > array_b[1]){
        massimo[1] = array_a[1];
        minimo[1] = array_b[1];
    }else{
        massimo[1] = array_b[1];
        minimo[1] = array_a[1];
    }
    

    if(array_a[2] > array_b[2]){
        massimo[2] = array_a[2];
        minimo[2] = array_b[2];
    }else{
        massimo[2] = array_b[2];
        minimo[2] = array_a[2];
    }

    media[0] = (array_a[0] + array_b[0]) / 2;
    media[1] = (array_a[1] + array_b[1]) / 2;
    media[2] = (array_a[2] + array_b[2]) / 2;


    printf("massimi = ");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", massimo[i]);
    }
    printf("\n");

    printf("minimi = ");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", minimo[i]);
    }
    printf("\n");

    printf("medie = ");
    for (int i = 0; i < SIZE; i++){
        printf("%.1f ", media[i]);
    }
    printf("\n");

    return 0;
}
