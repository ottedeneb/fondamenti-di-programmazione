#include <stdio.h>

int main(){
	
	int N, successore, predecessore;

	printf("Inserisci un numero N: ");
	scanf("%d", &N);
	
	successore = N + 1;
	predecessore = N -1;

	printf("Successore: %d\n", successore);
	printf("Predecessore: %d \n", predecessore);


	return 0;

}
