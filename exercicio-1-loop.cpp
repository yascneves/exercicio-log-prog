#include <stdio.h>

int main (){
	int numVezes, valor, acumulador=0, contVezes=0; //contVezes é usado para controlar o numero de vezes que o laço foi executado
	printf("Digite o número de vezes que a operação deve ser executada\n");
	scanf("%d", &numVezes);
	while(numVezes>contVezes){
		printf("Entre com um novo valor\n");
		scanf("%d", &valor);
		acumulador = acumulador + valor;
		contVezes++;
	}
	printf("A soma dos valores eh: %d", acumulador);
		
		
}
