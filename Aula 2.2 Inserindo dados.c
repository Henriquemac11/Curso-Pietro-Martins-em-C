#include <stdio.h>

int main(){
	
	int idade = 0; //Valor decimal
	float peso = 0; //Valor Float

	printf("Digite sua idade:\n"); 
	scanf("%d", &idade); // entrada
	
	printf("Digite seu peso:\n");
	scanf("%f", &peso); //entrada
	
	printf("idade informada: %d.\n", idade); //sa�da
	printf("peso informado: %f.\n", peso); // sa�da
	
	return 0;
}
