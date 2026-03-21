#include <stdio.h>

int main(){
    int n;
    int fattoriale = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    if(n != 0){
        for(int i = 1; i <= n; i ++){
            fattoriale *= i;
        }
    }else{
        fattoriale = 1;
    }

    printf("Fattoriale: %d\n", fattoriale);

    return 0;
}