//3.	Dadas às idades dos pacientes de uma clínica, informe a idade daquele mais idoso. 
//Considere que todas as idades são distintas e que o número de pacientes
// é informado pelo usuário, no momento da execução do programa.

#include <stdio.h>

int main(){
    int pacientes, idade, i, maioridade = 0;

    printf("Qual o numero de pacientes?");
    scanf("%d", &pacientes);

    for (i = 0; i < pacientes; i++)
    {
        printf("Qual a idade do paciente %d \n", i+1);
        scanf("%d", &idade);
        
        if (idade > maioridade)
        {
            maioridade = idade;
        }
    }

    printf("A maior idade e: %d", maioridade);
    
}