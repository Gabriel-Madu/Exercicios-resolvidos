/* Ler um valor e escrever se é positivo ou negativo (considere o valor zero como
positivo).
*/

#include <stdio.h>

int main (){
   
    int valor;
    
    printf("Digite Valor: ");
    scanf("%d", &valor);
    
    if (valor < 0)
       printf("\nValor negativo");
    else
       printf("\nValor positivo");       
}
