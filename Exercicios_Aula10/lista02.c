// 2. Faça um algoritmo que leia 10 elementos e mostre o menor elemento e a posição
// em que ele foi encontrado.

#include <stdio.h>

int main() {
    int numeros[10];
    int i, menor, posicao;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];
    posicao = 0;

    for (i = 1; i < 10; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
            posicao = i;
        }
    }

    printf("\nMenor elemento: %d", menor);
    printf("\nEncontrado na posicao: %d\n", posicao);

    return 0;
}
