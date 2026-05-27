// Elabore um algoritmo que leia duas matrizes, A e B do tipo (3x3) e calcule em uma
// matriz R sua multiplicação.

#include <stdio.h>

int main()
{
    int i, j, k;
    int A[3][3], B[3][3], R[3][3];

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Digite os elementos da matriz B:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            R[i][j] = 0;
            for (k = 0; k < 3; k++)
                R[i][j] += A[i][k] * B[k][j];
        }

    printf("Matriz R (A x B):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("R[%d][%d] = %d\n", i, j, R[i][j]);

    return 0;
}