#include <stdio.h>

int main()
{
    int i, j, temp, A[5][5];

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 5; j++)
        {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
 
    printf("Matriz transposta:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }

    return 0;
}