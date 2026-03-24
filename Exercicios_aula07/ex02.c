#include <stdio.h>
#include <stdbool.h>
int main() {
    int i, op;
        for(i=0; true; i++) {
            printf ("iteracao %d\n", i);
            printf("Continuar?");
            scanf("%d", &op);
        if(op==0) {
        break;
        }
    }
}
