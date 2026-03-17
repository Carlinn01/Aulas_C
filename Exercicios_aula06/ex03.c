#include <stdio.h>
#include <conio.h>
int main () {
    int num;
    printf("Digite um numero: ");
    scanf("%d" , &num);
    if (num > 0) {
        printf("O numero eh positivo");
    }
    else if (num < 0) {
        printf("O numero eh negativo");
    }
    else {
        printf("O numero eh zero");
    }
}