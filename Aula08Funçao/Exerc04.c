#include <stdio.h>

//4. Faça um programa que calcule e imprima o fatorial de um número,
// usando uma função que receba um valor e retorne o fatorial desse valor.
 int calcFatorial(int numero) {
   int fat;
   for(fat = 1; numero > 1; numero = numero - 1){
      int fat = fat * numero;
   }
   return fat;
   }

void main() {
    int num;
    printf("Informe um numero: \n");
    scanf("%d", &num);

    printf("O fatorial de %d é: %d\n",num, calcFatorial(num));

}