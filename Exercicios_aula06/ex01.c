#include <stdio.h>
#include <conio.h>
int main () {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade > 17) {
        printf("Maior de idade");
    };
}