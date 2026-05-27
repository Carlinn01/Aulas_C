#include <stdio.h>
#include <stdlib.h>

int EhPar(int b) {
    if (b % 2){
        return 0;
    }else {
        return 1;
    }
}
    int main() {
        int num;
        scanf("%d", &num);
        if (EhPar(num)) {
            printf("É par\n");
        }else{
            printf("É Ímpar\n");
        }
        return 0;
    }

