#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    else
    return n * fatorial(n-1);
}

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Fatorial: %d", fatorial(n));

    return 0;
}