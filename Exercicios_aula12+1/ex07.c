#include <stdio.h>

int main()
{
    int i, j, valor, cont, A[5][5];

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Digite o valor a buscar: ");
    scanf("%d", &valor);

    cont = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (A[i][j] == valor)
                cont++;

    printf("O valor %d aparece %d vez(es) na matriz.\n", valor, cont);

    return 0;
}