/*Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
mês com 30 dias.
*/

#include <stdio.h>

int main (){
	
	int idade, anos, meses, dias;
	
	printf("Digite anos: "); //Considerar ano com 365 dias
	scanf("%d", &anos);
	printf("Digite meses: "); //Considerar mês com 30 dias
	scanf("%d", &meses);
	printf("Digite dias: ");
	scanf("%d", &dias);
	
	idade = anos * 365 + meses * 30 + dias;

	printf("\nIdade em dias: %d", idade);
}
