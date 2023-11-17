#include <stdio.h>

//Exercicio utilizando acumuladores

int main (){
	int numVezes, valor, acumulador=0, contVezes=0; //contVezes é usado para controlar o numero de vezes que o laço foi executado
	printf("Entre com um valor\n");
	scanf("%d", &valor);
	while(valor !=0){
		acumulador = acumulador + valor;
		printf("Entre com um novo valor\n");
		scanf("%d", &valor);
	}
	printf("A soma dos valores eh: %d", acumulador);
		
		
}
