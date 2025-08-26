#include <stdio.h>

int main() {
    int A[5], B[5], i, produto = 0;

    printf("Digite 5 numeros para o vetor A:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite 5 numeros para o vetor B:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 5; i++) {
        produto += A[i] * B[i];
    }

    printf("Produto escalar: %d\n", produto);

    return 0;
}
