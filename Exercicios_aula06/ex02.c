#include <stdio.h>
#include <conio.h>
int main () {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
        printf("Os números são iguais");
    }
    else {
        printf("Os numeros sao diferentes");
    }
}