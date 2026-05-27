#include <stdio.h>

int main()
{
    int i, j, A[4][4];

    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    printf("Diagonal principal:\n");
    for (i = 0; i < 4; i++)
        printf("A[%d][%d] = %d\n", i, i, A[i][i]);

    return 0;
}