#include <stdio.h>

int main(){
    int a, b, swap;

    printf("A: ");
    scanf("%d", &a);

    printf("B: ");
    scanf("%d", &b);

    swap = b;

    printf("--------\n");
    
    printf("A: %d \n", swap);

    swap = a;

    printf("B: %d \n", swap);  


    return 0;
}


