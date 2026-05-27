#include <stdio.h>

int main()
{
    int i, j, A[3][4], B[3][4];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            B[i][j] = A[i][j] * 3;

    printf("Matriz B (triplo de A):\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    return 0;
}