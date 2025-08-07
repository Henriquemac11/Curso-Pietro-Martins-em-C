// If and ELSE

#include <stdio.h>
#include <stdlib.h>

int main(){
	 float nota;
	 
	 printf("Insira a nota: \n");
	 scanf("%f", &nota);
	 
	 if(nota >= 7.0){
	 	printf("Aprovado(a) \n!");
	 } else {
	 	printf("Reprovado(a)! \n");
	 }
	 
	 system("Pause");
}
