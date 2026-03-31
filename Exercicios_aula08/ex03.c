#include <stdio.h>

int main() {
   int op = 1;
while (op != 0) {
    printf ("Digite (0 p/ sair): ");
    scanf ("%d", &op);
    if(op > 0)
        printf ("Positivo\n");
    else if(op < 0)
        printf ("Negativo\n");
}
printf ("Tchau!");
}