//If Operadores l�gicos
//    &&
//    || 
//    !

#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Insira a nota: \n");
	scanf("%f", &nota);
	
	if(nota >= 4.0 && nota < 7.0){
		printf("tem direito a exame! \n");
	}
	
	if(nota <= 3.0){
		printf("Reprovado(a)! \n");
	}
	
	if(nota >= 7.0){
		printf("Aprovado(a)! \n");
	}
	
	
	
}
