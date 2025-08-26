#include <stdio.h>

int main() {
    int numeros[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nlistagem dos numeros:\n");
    printf("indice\tnumero\tpar/impar\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\t%d\t", i, numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            printf("PAR\n");
        } else {
            printf("IMPAR\n");
        }
    }
    
    return 0;
}