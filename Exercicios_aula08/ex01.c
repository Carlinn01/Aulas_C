#include <stdio.h>
int main() {
    int i, n;
    float media = 0, nota;
    printf("Informe a quantidade de notas: ");
    scanf("%d" , &n);
    i = 0;
    while (i < n)
    {
        printf("Informa a nota %d: ", i);
        scanf("%f", &nota);
        media += nota;
        i++;
    }
    media = media / n;
    printf("Media: %.2f\n", media);
    
}