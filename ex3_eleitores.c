/*Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores.
*/

#include <stdio.h> 

int main (){
    
	float eleitores, votosbrancos, votosnulos, votosvalidos;
	
    printf("Digite numero de eleitores: ");
    scanf("%f", &eleitores);
    printf("Digite numero de votos brancos: ");
    scanf("%f", &votosbrancos);   
    printf("Digite numero de votos nulos: ");
    scanf("%f", &votosnulos);
    printf("Digite numero de votos validos: ");
    scanf("%f", &votosvalidos);

   float percentualvotosbrancos, percentualvotosnulos, percentualvotosvalidos;
   
   percentualvotosbrancos = votosbrancos / eleitores;
   percentualvotosnulos = votosnulos / eleitores;
   percentualvotosvalidos = votosvalidos / eleitores;
   
   printf("\nPercentual de votos brancos: %.2f", percentualvotosbrancos);
   printf("\nPercentual de votos nulos: %.2f", percentualvotosnulos);
   printf("\nPercentual de votos validos: %.2f", percentualvotosvalidos);
}
