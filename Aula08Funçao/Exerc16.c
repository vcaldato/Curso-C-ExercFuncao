#include <stdio.h>

//16. Construa um programa que leia um valor inteiro e 
//retorne se a raiz desse número é exata ou não. Escreva
//uma função para fazer a validação. Ao final imprima o resultado.

int raizExata(int num) {
    
    if (num < 0) {
        return 0; 
    }

   
    double raiz = sqrt(num);

    
    int raizInteira = (int)raiz;

    
    if (raiz == raizInteira) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    if (raizExata(numero)) {
        printf("A raiz quadrada de %d é exata.\n", numero);
    } else {
        printf("A raiz quadrada de %d não é exata.\n", numero);
    }
}
