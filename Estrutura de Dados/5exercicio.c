#include<stdio.h>
#include<stdlib.h>

/*      Exercicio 01
    Faça um programa que preencha um vetor inteiro de tamanho 10 pedindo valores ao usuario.
    Em seguida, calcule e salve um segundo vetor o quadrado de cada elemento do primeiro vetor. 
    por fim, imprima os dois vetores.
*/

int main(){

    int i;
    int vet[10];
    int resultado[10];

    for(i = 0; i < 10; i++){
        printf("Digite um elemento na posicao %d:", i);
        scanf("%d", &vet[i]); 
    }
    printf("\n");

    for(i = 0; i < 10; i++){
        printf("Elemento na posicao %d: %d\n", i,vet[i]);
    }
    printf("\n");

    for(i = 0; i < 10; i++){
       resultado[i] = vet[i] * vet[i];
    }

    for(i = 0; i < 10; i++){
         printf("Resultado %d: %d\n", i, resultado[i]);
    }

return 0;
}