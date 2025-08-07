#include <stdio.h>
#include <stdlib.h>

int main(){
	int A, B, soma, sub, mult, div;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &A);
	printf("Digite o segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B ; 
	sub = A - B ;
	mult = A * B ;
	div = A / B ;
	
	printf("Resultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Subtracao: %d.\n", sub);
	printf("Multiplicacao: %d.\n", mult);
	printf("Divisao: %d.\n\n", div );
	
	
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento: %d.\n", dado);
	
	dado += 3;
	printf("Depois do incremento em 3 unidades: %d.\n", dado);
	
	dado -= 2;
	printf("depois do decremento de 2 unidades: %d.\n", dado);
	
	dado *= 10;
	printf("depois de multiplicar por 10: %d. \n", dado);
	
	system("pause");
}
