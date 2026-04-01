// Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:
// •	número do consumidor
// •	quantidade de kWh consumidos durante o mês
// •	tipo (código) do consumidor
// 1 – residencial, preço em reais por kWh = 0,3
// 2 – comercial, preço em reais por kWh = 0,5
// 3 – industrial, preço em reais por kWh = 0,7
// Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero). Calcular e imprimir:
// •	o custo total para cada consumidor
// •	o total de consumo para os três tipos de consumidor
// •	a média de consumo dos tipos 1 e 2

#include <stdio.h>

#include <stdio.h>

int main() {
    int num_consumidor, tipo;
    float consumido, custo_individual;
    float total1 = 0, total2 = 0, total3 = 0; //kWh
    int conta1 = 0, conta2 = 0; // media
    float dados[20][4]; 
    int i = 0;
    int j;

    printf("Consumidor (0 para sair): ");
    scanf("%d", &num_consumidor);

    while (num_consumidor != 0) {
        printf("kWh: ");
        scanf("%f", &consumido);

        do {
            printf("Tipo (1, 2 ou 3): ");
            scanf("%d", &tipo);
        } while (tipo < 1 || tipo > 3); //se diferente roda dnv

        if (tipo == 1) {
            custo_individual = consumido * 0.3;
            total1 = total1 + consumido;
            conta1 = conta1 + 1;
        } 
        else if (tipo == 2) {
            custo_individual = consumido * 0.5;
            total2 = total2 + consumido;
            conta2 = conta2 + 1;
        } 
        else {
            custo_individual = consumido * 0.7;
            total3 = total3 + consumido;
        }

        dados[i][0] = num_consumidor;
        dados[i][1] = consumido;
        dados[i][2] = tipo;
        dados[i][3] = custo_individual;
        
        i++;

        if (i < 20) {
            printf("\nProximo consumidor (0 para sair): ");
            scanf("%d", &num_consumidor);
        }
    }

    printf("\nNumero\tkWh\tTipo\tCusto\n");
    for (j = 0; j < i; j++) {
        printf("%.0f\t%.2f\t%.0f\tR$ %.2f\n", dados[j][0], dados[j][1], dados[j][2], dados[j][3]);
    }
    printf("\nTotal T1: %.2f | T2: %.2f | T3: %.2f\n", total1, total2, total3);

    if (conta1 > 0) printf("Media T1: %.2f\n", total1 / conta1);
    if (conta2 > 0) printf("Media T2: %.2f\n", total2 / conta2);

}
