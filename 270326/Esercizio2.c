#include <stdio.h>
#define N 6

int main(){
    int array[N], array_shifted[N];
    int shift;

    printf("Inserisci 6 elementi: \n");

    for(int i = 0; i < N; i++){
        scanf("%d", &array[i]);
    }

    printf("Input: ");
    for(int i = 0; i < N; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Inserisci lo spostamento: \n");
    scanf("%d", &shift);

    for(int i = 0; i < N; i++){
        array_shifted[i] = array[(i + 1) % N];
        
    }

    printf("Output: \n");
    for(int i = 0; i < N; i++){
        printf("%d ", array_shifted[i]);
    } 
    printf("\n");



    return 0;
}