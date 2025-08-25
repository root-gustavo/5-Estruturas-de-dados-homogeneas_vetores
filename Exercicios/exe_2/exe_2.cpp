#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Digite numeros para preencheer o vetor: \n");
			scanf("%d", &vet[i]);
	}
	for(i = 0; i < 5; i++){
		if(vet[i] % 2 != 0){
			printf("Os numeros impares digitados foram: %d\n", vet[i]);
		}
	}
}