#include <stdio.h>

//5. Faça um programa que verifique se um número é primo
// por meio de uma função. Ao final imprima o resultado.

int Primo(int numero) {
    if (numero <= 1) {
        return 0; 
    }

    if (numero == 2) {
        return 1; 
    }

    if (numero % 2 == 0) {
        return 0; 
    }

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) {
            return 0; 
        }
    }

    return 1;
}
void main() {
    int num;
    printf("Informe um numero: \n");
    scanf("%d", &num);

    if (Primo(num)) {
        printf("%d eh primo.\n", num);
    } else {
        printf("%d nao eh primo.\n", num);
    }
}
    
