#include <stdio.h>
#include <math.h>
    int main() {
        int op, num;
            for(op=1; op!=0; )  {
                printf ("Digite um numero: ");
                scanf ("%d", &num);
                num = pow(num,2)*3;
                printf ("Resultado: %d\n", num);
                printf ("Continuar?\n>>");
                scanf ("%d", &op);
            }
}
