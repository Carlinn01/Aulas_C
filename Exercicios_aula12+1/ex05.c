#include <stdio.h>

int main()
{
    int i, j, A[4][4], B[4][4];
    int somaA = 0, somaB = 0;

    printf("Matriz A:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Matriz B:\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    for (i = 0; i < 4; i++)
    {
        somaA += A[i][i];
        somaB += B[i][i];
    }

    printf("Soma diagonal A: %d\n", somaA);
    printf("Soma diagonal B: %d\n", somaB);

    if (somaA == somaB)
        printf("As diagonais sao iguais!\n");
    else
        printf("As diagonais sao diferentes!\n");

    return 0;
}