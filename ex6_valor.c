/*Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior
que 10, caso contrário escrever NÃO É MAIOR QUE 10!.*/

#include <stdio.h>

int main (){
   
    int valor;
    
    printf("Digite valor: ");
    scanf("%d", &valor);
    
    if (valor > 10)
       printf("\nE MAIOR QUE 10!");
    else
       printf("\nNAO E MAIOR QUE 10!");       
}
