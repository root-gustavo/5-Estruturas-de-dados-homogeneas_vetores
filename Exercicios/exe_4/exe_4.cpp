#include <stdio.h>

int main() {
    int A[5], B[5];
    int i;

    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++) {
        B[i] = A[i] * 2;
    }

    printf("\nVetor B (dobro dos valores de A):\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d] = %d\n", i, B[i]);
    }

    return 0;
}