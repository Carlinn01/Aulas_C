//1. Faça um algoritmo que leia 10 elementos e mostre o maior elemento.

#include <stdio.h>
int main()
{
    int numeros[10];
    int i, maior;
    
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }
        maior = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("\nO maior numero e: %d\n", maior);

}