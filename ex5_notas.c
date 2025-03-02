/*Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.
Fórmula para o cálculo da média final é:

Média final = n1 * 2 + n2 * 3 + n3 * 5 / 10
*/

#include <stdio.h>

int main (){
	
	float mediafinal, n1, n2, n3;
	
	printf("Digite nota 1: ");
	scanf("%f", &n1);
	printf("Digite nota 2: ");
	scanf("%f", &n2);
	printf("Digite nota 3: ");
	scanf("%f", &n3);
	
	mediafinal = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
	
	printf("\nMedia final: %.2f", mediafinal);
}
