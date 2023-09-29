#include <stdio.h>
#include <stdlib.h>

//2. Faça um programa que receba as notas de três provas
// e calcule a média. Para o cálculo, escreva uma
//função. O programa deve imprimir a média ao final.

float calcularMedia(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3.0;
    return media;
    }
   

    void main() {
    float nota1v, nota2v, nota3v;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1v);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2v);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3v);


   float media = calcularMedia(nota1v,nota2v,nota3v);

    printf("A média das provas é: %.2f\n", media);
  

}