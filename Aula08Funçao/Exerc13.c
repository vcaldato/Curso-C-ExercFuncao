#include <stdio.h>
// Em épocas de pouco dinheiro, os comerciantes estão
// procurando aumentar suas vendas oferecendo
//desconto. Faça um programa que permita entrar com 
//o valor de um produto e o percentual de desconto e
//imprimir o novo valor com base no percentual informado.
// Para fazer o cálculo, implemente uma função.

float calcDesconto(float valorProduto, float percDesconto){
    float novoValor = (valorProduto * percDesconto) / 100;
    return novoValor;
}

void main() {
    float produto, desconto;

    printf("Informe o valor do produto: \n");
    scanf("%f",&produto);

    printf("Informe o valor do desconto: \n");
    scanf("%f",&desconto);

    printf("O valor do produto com desconto é: %.2f\n",calcDesconto(produto, desconto));
}