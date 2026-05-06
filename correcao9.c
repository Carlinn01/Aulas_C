#include <stdio.h>

int main(){
int i=10, j=0, soma=0;

do
{
    j++;
    soma+=i+j;
    i -= 2;
} while (i >= 2);

    printf("soma=%d", soma);
}
