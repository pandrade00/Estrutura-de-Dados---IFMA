// vetore (array unidimensionais)
// um vetor é um conjunto de elementos do mesmo tipo armazendado de forma sequencial na memoria
// um indice é usado para acessar cada elemento dentro do vetor
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i;// varialve usada dentro do for
    int idade;// varialvel para numeros inteiros INT
    //char sexo; //variavel para caracteres CHAR
    //float n1; //variavel para numeros decimais FLOAT

// vetores para numeros inteiros INT
    //int num1 [10];
    int num2 [] = {1,5,9,15,43};
    //int num3 [5] = {4,7,5};
    //int num4 [5] = {1,2,3,4,5,6};
    //int num5 [5] = {0};

//vetores para caracteres CHAR
    //char letras[100];
    char vogais[5] = {'a','e','i','o','u'};

//vetores para numeros decimais FLOAT
    float notas [3] = {7.5, 8.3, 9.5};

    
    for(i=0; i < 5; i++){
        printf(" %d ", num2[i]);
    } // imprimir os vetores
    
    printf("\n\n");
    for(i = 0; i < 5; i++){
        printf(" %c ", vogais[i]);
    }//imprimir os vetores

    printf("\n\n");
    for(i = 0; i < 3; i++){
        printf(" %.2f ", notas[i]);
    }

    return 0;
}