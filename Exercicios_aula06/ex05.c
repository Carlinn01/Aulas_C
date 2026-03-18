#include <stdio.h>
int main() {
    int val;
    printf("Digite um número: ");
    scanf("%d", &val);
    if (val > 0 || val % 2 == 0) {
        printf("O número é par e positivo");
    }
}