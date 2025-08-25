#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, vet[5];
	float media = 0;
	
	for(i = 0; i < 5; i++){
		printf("Digite um numero: \n");
		scanf("%d", &vet[i]);
		media = media + vet[i];
	}
	media = media / 5;
	printf("\nA media dos valores eh: %.2f\n", media);
	
	for(i = 0; i < 5; i++){
		if(vet[i] >= media){
			printf("\nOs valores superiores ou iguais a media eh: %d \n", vet[i]);
		}
	}
}