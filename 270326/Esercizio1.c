#include <stdio.h>
#define N 8

void cerca_elemento(int array[], int target){
    int presente = 1;

    for(int i = 0; i < N; i++){
        if(array[i] == target){
            presente = 0;
        }
    }
    
    if(presente == 0){
        printf("L'elemento è presente!\n");
    }else{
        printf("L'elemento NON è presente!\n");
    }
}

void stampa_menu(){
    printf("\n");
    printf("-- Seleziona l'operazione --\n");
    printf("1. Inserisci valori\n");
    printf("2. Cerca elemento\n");
    printf("3. Esci\n");
}

int main(void){
    int array[N];
    int operazione, target, elemento;

    stampa_menu();

    do{
        scanf("%d", &operazione);
        switch (operazione)
        {
        case 1:
            printf("Inserisci 8 valori: \n");
            for (int i = 0; i < N; i++){
                scanf("%d", &elemento);
                array[i] = elemento;
            }
            printf("Fatto!\n");
            stampa_menu();
            break;
        case 2:
            printf("Inserisci il target: \n");
            scanf("%d", &target);
            cerca_elemento(array, target);
            stampa_menu();
            break;
        case 3:
            printf("Uscendo...\n");
            return 0;
            break;
        default:
            printf("Operazione non valida!\n");
            break;
        }

    }while(1==1);
    
    
    return 0;
}