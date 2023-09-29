#include <stdio.h>
//14. Faça um programa que verifique quantas vezes um número
// é divisível por outro. A função deve receber dois
//parâmetros, o dividendo e o divisor. Ao ler o divisor, é
// importante verificar se ele é menor que o dividendo. Ao
//final imprima o resultado. 

int contDivisao(int dividendo, int divisor) {
    if (divisor >= dividendo) {
        printf("O divisor deve ser menor que o dividendo.\n");
        return -1;
    }

    int contador = 0;
    while (dividendo >= divisor) {
        dividendo -= divisor;
        contador++;
    }

    return contador;
}

int main() {
    int vdividendo, vdivisor;

    printf("Digite o dividendo: ");
    scanf("%d", &vdividendo);

    printf("Digite o divisor: ");
    scanf("%d", &vdivisor);

    int resultado = contDivisao(vdividendo, vdivisor);

    if (resultado != -1) {
        printf("%d é divisível por %d %d vezes.\n", vdividendo, vdivisor, resultado);
    }
}
