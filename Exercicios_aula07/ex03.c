#include <stdio.h>
#include <stdbool.h>
int main() {
    int i, op;
        for(i=0; true; i++) {
            printf("interacao %d\n", i);
            printf("Continuar? ");
            scanf("%d", &op);
        if(op != 0) {
        printf("executado?\n");
}
        else {
        printf("Ja vai tarde...\n");
        break;
            }
        } 
    return 0;
} 
