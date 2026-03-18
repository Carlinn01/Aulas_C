#include <stdio.h>
#include <conio.h>
#include <math.h>
int main () {
    float num1, num2, resultado;
    int op;
    scanf("%f %f", &num1, &num2);
    printf ("menu: 1.Soma 2.Subtr. 3.Mult. 4.Div. 5.Pot.: ");
    scanf("%d", &op);
    if (op == 1)
        resultado = num1 + num2;
    else if (op == 2)
        resultado = num1 - num2;
    else if (op == 3)
        resultado = num1 * num2;
    else if (op == 4)
        resultado = num1 / num2;
    else if (op == 5)
        resultado = pow(num1, num2);
    printf("Resultado: %.0f", resultado);
}