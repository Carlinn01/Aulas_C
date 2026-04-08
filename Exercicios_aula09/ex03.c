#include <stdio.h>
int main()
{
    int semana;
    printf("entre com numero de 0 a 6: ");
    scanf("%d", &semana);
    scanf("%d", &semana);
    switch (semana)
    {
    case 0:
        printf("domingo");
        break;
    case 1:
        printf("segunda");
        break;
    case 2:
        printf("terca");
        break;
    // ... até case 6 ...
    default:
        printf("invalido");
    }
}