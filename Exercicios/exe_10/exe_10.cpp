#include <stdio.h>

int main() {
    int vetor[100];
    int i;

    for (i = 0; i < 100; i++) {
        vetor[i] = (i + 1) * 10;
    }

    printf("Vetor preenchido:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

