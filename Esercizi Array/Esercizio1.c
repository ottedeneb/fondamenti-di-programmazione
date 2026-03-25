/*
1. Scrivere un programma che gestisce un array di 6 interi che rappresentano i voti di 6 studenti. L’utente, selezionando un opportuno comando, deve poter scegliere (ripetutamente) una delle seguenti azioni:

- Inserire tutti i valori dei voti;

- Stampare i voti dal primo all’ultimo;

- Stampare i voti dall’ultimo al primo;

- Stampare il voto massimo e minimo, indicando anche le posizioni in cui si trovano tali valori;

- Stampare il voto medio.
*/

#include <stdio.h>
#define N_VOTI 5

void inserisci_voti(int array_voti[]){

    for (int i = 0; i < N_VOTI; i++){
        printf("Inserisci il %d voto: ", i + 1);
        scanf(" %d", &array_voti[i]);
    }
    
    printf("Voti inseriti! \n");

}

void stampa_voti(int array_voti[], int scelta){
    switch (scelta)
    {
    case 0 : //ordine crescente
        printf("\n");
        printf("Voti in ordine crescente: \n");
        for (int i = 0; i < N_VOTI; i++){
            printf("%d\n", array_voti[i]);
        }
        break;
    case 1 : //ordine decrescente
        printf("\n");
        printf("Voti in ordine decrescente: \n");
        for (int i = 4; i >= 0; i--){
            printf("%d\n", array_voti[i]);
        }
        break;
       
    default:
        break;
    }
}

void massimo_minimo(int array_voti[]){
    int massimo, minimo = array_voti[0];
    int pos_max = 0, pos_min = 0;

    for(int i = 0; i < N_VOTI; i++){
        if (array_voti[i] > massimo){
            massimo = array_voti[i];
            pos_max = i;
        }

        if (array_voti[i] < minimo){
            minimo = array_voti[i];
            pos_min = i;
        }
    }
    printf("Il voto massimo è: %d e si trova alla posizione %d\nIl voto minimo è: %d e si trova alla posizione %d \n", massimo, pos_max, minimo, pos_min);
}

void media_voti(int array_voti[]){
    int somma_voti;
    float media;
    for (int i = 0; i < N_VOTI; i ++){
        somma_voti += array_voti[i];
    }
    media = somma_voti / N_VOTI;
    printf("La media dei voti è: %f\n", media);
}



int main(void){
    int voti[N_VOTI];
    int scelta = 0;
    printf("1. Inserisci i voti\n");
    printf("2. Stampa i voti dal primo all'ultimo\n");
    printf("3. Stampa i voti dall'ultimo al primo\n");
    printf("4. Stampa voto massimo e minimo e le loro posizioni\n");
    printf("5. Stampa il voto medio\n");

    while(1 == 1){
        scanf(" %d", &scelta);
        switch (scelta)
        {
        case 1:
            printf("Hai scelto: 1\n");
            inserisci_voti(voti);
            break;
        case 2:
            stampa_voti(voti, 0);
            break;
        case 3:
            stampa_voti(voti, 1);
            break; 
        case 4:
            massimo_minimo(voti);
            break; 
        case 5:
            media_voti(voti);
            break; 
        default:
            printf("wtf bro\n");
            break;
        }

    } 

}