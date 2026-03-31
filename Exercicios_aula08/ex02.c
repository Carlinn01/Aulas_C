#include <stdio.h>
#include <conio.h>
int main() {
    int par = 0;
    printf("Os pares de 1 a 100\n: ");
    while (par <= 100)
    {
        printf("%d\t", par);
        par += 2;
    }
    getch();
}