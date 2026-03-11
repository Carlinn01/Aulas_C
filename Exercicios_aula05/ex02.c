//2. Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a
//comissão do vendedor seja de 10% do total de vendas.

#include <stdio.h>
//pausar o terminal
#include <stdlib.h>

int main() {
    
    float vendas,comissao;

    printf("Informe o valor total de vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.1 ;

    printf("A comissão do vendedor é %2.f", comissao);

    system("pause");

}
