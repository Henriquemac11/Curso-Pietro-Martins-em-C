// Estrutura If

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota ;
	
	printf("Insira a nota: \n");
	scanf("%f", &nota);
	
	if(nota >= 7.0){
		printf("Aprovado(a)! \n");
	}
	
	if(nota <= 6.0){
		printf("Reprovado(a)! \n");
	}
	
	
	system("pause");
}


