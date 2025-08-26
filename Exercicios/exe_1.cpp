#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vet[5], i;
	
	for(i = 0; i <= 4; i++){
		printf("Digite 5 numeros inteiros para preencher um vetor: ");
			scanf("%d", &vet[i]);
	}
	
	printf("\nVetor em ordem inversa:\n");
	for(i = 4; i >= 0; i--){
		printf("%d\n", vet[i]);
	}
	
	return 0;
}