#include <stdio.h>

int main()
{
    int i, j, A[5][5];

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Elementos acima da diagonal principal:\n");
    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);

    return 0;
}