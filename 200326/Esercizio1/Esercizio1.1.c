#include <stdio.h>

int main(){
    int n, valore_assoluto;
    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if(n < 0){
        valore_assoluto = n * -1;
        printf("Il valore assoluto del numero %d è %d\n", n, valore_assoluto);
    }
    else if(n == 0){
        printf("Hai inserito 0\n");
    }
    else{
        printf("Il valore assoluto del numero %d è %d\n", n, n);
    }

    return 0;
}