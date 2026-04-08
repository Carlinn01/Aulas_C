//1. Ler vários números e informar quantos números entre 100 e 200 foram digitados.
//Quando o valor 0 for lido, o algoritmo deverá cessar sua execução.

#include <stdio.h>

int main() {
    int num;
    int contador = 0;

    while (1) {
        printf("Digite um numero (0 p sair): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num >= 100 && num <= 200) {
            contador++;
        }
    }

    printf("Total de numeros entre 100 e 200: %d\n", contador);
}