#include <stdio.h>

int main(){
    int n1, n2, n3;
    int maggiore, minore, medio;

    printf("Inserisci n1: ");
    scanf("%d", &n1);

    printf("Inserisci n2: ");
    scanf("%d", &n2);

    printf("Inserisci n3: ");
    scanf("%d", &n3);


    if(n1 > n2 && n1 > n3){
        maggiore = n1;
        if(n2 > n3){
            minore = n3;
            medio = n2;
        }else{
            minore = n2;
            medio = n3;    
        }
    }else{
        minore = n1;
    }

    if (n2 > n1 && n2 > n3){
        maggiore = n2;
        if(n1 > n3){
            minore = n3;
            medio = n1;
        }else{
            minore = n1;
            medio = n3;    
        }
    }else{
        minore = n2;
    }

    if (n3 > n1 && n3 > n2){
        maggiore = n3;
        if(n1 > n2){
            minore = n2;
            medio = n1;
        }else{
            minore = n1;
            medio = n2;    
        }
    }else{
        minore = n3;
    }

    printf("n1: %d \nn2: %d \nn3: %d \n", maggiore, medio, minore);
    
    return 0;

}