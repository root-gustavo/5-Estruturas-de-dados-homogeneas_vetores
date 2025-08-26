#include <stdio.h>

int main() {
    int q[10];
    float p[10];
    float total = 0;
    int i;
    
    printf("Qtd vendidas:\n");
    for(i = 0; i < 10; i = i + 1) {
        printf("Produto %d: ", i);
        scanf("%d", &q[i]);
    }
    
    printf("\nprecos de venda:\n");
    for(i = 0; i < 10; i = i + 1) {
        printf("produto %d: R$ ", i);
        scanf("%f", &p[i]);
    }
    

    for(i = 0; i < 10; i = i + 1) {
        total = total + (q[i] * p[i]);
    }
    
    printf("\nfaturamento total: R$ %.2f\n", total);
    
    return 0;
}