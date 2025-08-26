
#include <stdio.h>

int main() {
    int v[5];
    int i, menor, maior, soma = 0;
    float media;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    menor = maior = v[0];
    for (i = 0; i < 5; i++) {
        if (v[i] < menor) menor = v[i];
        if (v[i] > maior) maior = v[i];
        soma += v[i];
    }

    media = soma / 5.0;

    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma dos valores: %d\n", soma);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}
