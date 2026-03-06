#include <stdio.h>

int main(){
	
	int perimetro; 
	float lato, area;

	printf("Inserisci il perimetro di un quadrato: ");
	scanf("%d", &perimetro);

	lato = perimetro / 4 ;
	
	area = lato * lato;

	printf("Area del quadrato: %f \n", area);

	return 0;
}
