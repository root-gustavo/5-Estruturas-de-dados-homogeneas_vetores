#include <stdio.h>

int main() {
    int resultados[15];
    int ocorrencias[6] = {0, 0, 0, 0, 0, 0};
    int i;

    printf("Digite os 15 resultados dos lancamentos do dado (valores de 1 a 6):\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &resultados[i]);
        if (resultados[i] >= 1 && resultados[i] <= 6) {
            ocorrencias[resultados[i] - 1]++;
        }
    }

    printf("\nOcorrencias das faces do dado:\n");
    for (i = 0; i < 6; i++) {
        printf("Face %d: %d vezes\n", i + 1, ocorrencias[i]);
    }

    return 0;
}

