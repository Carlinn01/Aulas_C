//2. Entrar com a idade de várias pessoas e imprimir:
//• Total de pessoas com menos de 21 anos.
//• Total de pessoas com mais de 50 anos.

#include <stdio.h>

int main() {
    int idade;
    int contador21 = 0;
    int contador50 = 0;

    while (1) {
        printf("Digite um numero (0 p sair): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        if (idade < 21) {
            contador21++;
        }else if (idade > 50)
        {
            contador50++;
        }
        
    }

    printf("Total de pessoas com menos de 21 anos: %d\n", contador21);

    printf("Total de pessoas com menos de 50 anos: %d\n", contador50);


}