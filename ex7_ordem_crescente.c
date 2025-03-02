/*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em
ordem crescente.
*/

#include <stdio.h>

int main (){
   
    int valor1, valor2;
    
    printf("Digite Valor1: ");
    scanf("%d", &valor1);
    printf("Digite Valor2: ");
    scanf("%d", &valor2);
    
    if (valor1 > valor2){
       printf("\n %d", valor1);
       printf("\n %d", valor2);
    }
    if (valor1 < valor2){
       printf("\n %d", valor2);  
       printf("\n %d", valor1);     
    }
    if (valor1 == valor2){
       printf("\n Nao pode ter valores iguais!");
    }
}
