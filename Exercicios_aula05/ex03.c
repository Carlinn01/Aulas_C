//3. Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua
//área em metros quadrados.
#include <stdio.h>
#include <stdlib.h>

int main() {

    float comprimento, largura, area;

    printf("Digite o comprimento (metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura (metros): ");
    scanf("%f", &largura);

    area = comprimento * largura;


    printf("\nA area da sala e: %.2f metros quadrados.\n\n", area);

    system("pause");
}