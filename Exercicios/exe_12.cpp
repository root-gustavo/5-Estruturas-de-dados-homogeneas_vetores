#include <stdio.h>

int main() {
    int gabarito[6];
    int aposta[10];
    int i, j, pontos = 0;

    printf("Digite os 6 numeros do gabarito da Mega-Sena:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &gabarito[i]);
    }

    printf("Digite os 10 numeros da aposta:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &aposta[i]);
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 10; j++) {
            if (gabarito[i] == aposta[j]) {
                pontos++;
            }
        }
    }

    printf("\nO apostador fez %d ponto(s).\n", pontos);

    return 0;
}

