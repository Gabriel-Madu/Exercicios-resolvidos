/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor.
*/

#include <stdio.h>

int main (){
	
	float carronovo, custofabrica;
	
	printf("Digite custo de fabrica: ");
	scanf("%f", &custofabrica);
	
	carronovo = custofabrica + 0.28 + (0.45 * custofabrica);
	
	printf("\nCusto do carro novo: %.2f", carronovo);
}
