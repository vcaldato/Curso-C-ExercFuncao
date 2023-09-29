#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//1. Faça um programa em C que leia três números e,
// para cada um, imprimir o dobro. O cálculo deverá ser
//realizado por uma função e o resultado impresso ao final do programa.

int calcDobro(int numero) {
    return numero * 2;
}
void main() {
    int num1, num2, num3;

   
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    
    int dobro1 = calcDobro(num1);
    int dobro2 = calcDobro(num2);
    int dobro3 = calcDobro(num3);

    
    printf("O dobro do primeiro número é: %d\n", dobro1);
    printf("O dobro do segundo número é: %d\n", dobro2);
    printf("O dobro do terceiro número é: %d\n", dobro3);

}
