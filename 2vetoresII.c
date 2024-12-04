#include<stdio.h>
#include<stdlib.h>

// adicionando vetor apartir do teclado
int main(){

    int i;
    int num[10];

    for(i = 0; i < 10; i++){
        printf("Digite o elemento na posicao %d:", i);
        scanf("%d", &num[i]);
    }

    printf("\n");
// loop para exibir os elementos de vetor
    for(i = 0; i < 10; i++){
        printf("Elemento na posicao %d: %d\n", i, num[i]);
    }

    return 0;
}