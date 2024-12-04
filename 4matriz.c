#include<stdio.h>
#include<stdlib.h>

// uma matriz é um conjunto de elemetos do mesmo tipo


int main(){

//int vet[10];
// criando uma matriz
 //int mat[3][3] = {1,2,3,4,5,6,7,8,9};
 /*       c0  c1 c2
    linha 0   1  2   3
    linha 1   4  5   6
    linha 2   7  8   9
 */
//int i, j, mat[3][3] = {1,2,3,4,5,6,7,8,9};

    int i, j, mat[3][3];
// adicionando numeros apartir do teclado
    for ( i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("digite um valor: ");
            scanf("%d", &mat[i][j]);
        }
    }
    
   for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++)
        printf("%d ", mat[i][j]);
    printf("\n");
   }

return 0;
}