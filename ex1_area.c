/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo.
* area = base * altura*/

#include <stdio.h>

int main (){
  
  int area, base, altura;
  
  printf("Digite a base e a altura: ");
  scanf("%d %d", &base, &altura);
  
  area = base * altura;
  
  printf("\nArea: %d", area);
}