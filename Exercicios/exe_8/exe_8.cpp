#include <stdio.h>

int main() {
    int vetor[5];
    int numero, encontrado = 0;
    
    printf("Digite 5 numeros inteiros distintoss:\n");
    for (int i = 0; i < 5; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\ndigite um numero para buscar no vetor: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 5; i++) {
        if (vetor[i] == numero) {
            printf("numero encontrado no indice: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("nao encontrado\n");
    }
    
    return 0;
}