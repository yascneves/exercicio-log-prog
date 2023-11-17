#include <stdio.h>

//Exercicio utilizando estrutura de repetição com teste no início

int main (){
	int qtd;
	float preco, acumulador=0;
	
	printf("Digite a qtd\n");
	scanf("%d", &qtd);
	
	
	while(qtd>0){
		printf("Digite o preco\n");
		scanf("%f", &preco);
	
		acumulador = acumulador+qtd*preco;
		printf("O valor parcial da compra eh: %f", acumulador);
		printf("Digite a qtd\n");
		scanf("%d", &qtd);
	
	}
	printf("A soma total dos produtos eh: %f", acumulador);
}
