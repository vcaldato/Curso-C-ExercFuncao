#include <stdio.h>

 //15. Construa um programa em C que leia um caractere (letra) e, 
 //por meio de uma função, retorne se este
//caractere é uma consoante ou uma vogal. Ao final imprima o resultado

int verificar(char letra){
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'||
    letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return 1;
    } else {
        return 0; 
    }
}
void main(){
  char letrav;

 printf("Digite um caractere: ");
    scanf(" %c", &letrav);

    int resultado = verificar(letrav);

    if (resultado == -1) {
        printf("O letrav digitado não é uma letra.\n");
    } else if (resultado == 1) {
        printf("%c é uma vogal.\n", letrav);
    } else {
        printf("%c é uma consoante.\n", letrav);
    }
}


