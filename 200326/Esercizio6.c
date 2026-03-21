#include <stdio.h>

int main(){

    int n, successivo;
    int F_1 = 0;
    int F_2 = 1;

    printf("Inserisci un numero N: ");

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("%d ", F_1);
        successivo = F_1 + F_2;
        F_1 = F_2;
        F_2 = successivo;
    }
    
    printf("\n");

    return 0;
}