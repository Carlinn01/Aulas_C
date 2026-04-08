// 3. Entrar com um número da conta e o saldo de várias pessoas. 
//Imprimir todas as contas,
// os respectivos saldos e uma das mensagens: positivo ou negativo. Ao final,
// o percentual de pessoas com saldo negativo. total/negativos * 100
// O algoritmo acaba quando se digita um número negativo para a conta.

#include <stdio.h>

int main() {
    int numconta;
    float saldoconta;
    int totalpessoas = 0;
    int negativos = 0;

    while (1) {
        printf("Digite o numeo da conta (numero negativo para sair): ");
        scanf("%d", &numconta);
        
        if (numconta < 0) {
            break;
        }

        printf("Digite o saldo da conta: ");
        scanf("%f", &saldoconta);

        totalpessoas++;

        printf("Conta: %d , Saldo: %.2f  ", numconta, saldoconta);

        if (saldoconta >= 0)
        {
            printf("Saldo positivo");
        }else if (saldoconta < 0)
        {
            printf("Saldo negativo");
            negativos++;
        }   

    }

    float percentual = (negativos/totalpessoas) * 100;
    printf("%d" , totalpessoas );
    printf("%d" , negativos);

    printf("O percentual de pessoas com saldo negativo é de %.2f", percentual);





}
