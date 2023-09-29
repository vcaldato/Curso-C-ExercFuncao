#include <stdio.h>

//3. Faça um programa em C que leia o valor de um ângulo em graus e o converta,
// utilizando uma função, para
//radianos e ao final imprima o resultado. Veja a fórmula de cálculo a seguir.
///Em que:
//• rad = ângulo em radianos
//• ang = ângulo em graus
//• pi = número do pi

float calcRadiano(float angulo, float pi){
    float radiano = (angulo * pi) / 180;
    return radiano;
}

void main(){
    float valorAng;
    float valorPi;

    printf("Informe o valor do ângulo em graus: \n");
    scanf("%f",&valorAng);

     printf("Informe o valor do pi: \n");
    scanf("%f",&valorPi);

    printf("O valor do angulo em radianos é: %.2f \n",calcRadiano(valorAng, valorPi));

    
}