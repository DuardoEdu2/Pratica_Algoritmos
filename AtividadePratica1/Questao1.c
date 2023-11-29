//1. Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho
//n e inverta a ordem dos elementos armazenados nesse vetor.


#include <stdio.h>
#include <string.h>
#include <math.h>

void sort(int num[], int size){

    printf("Ivertidas:\t");
    for (int i = 1; i < size + 1; i++)
    {
        printf("%d, ", num[size - i]);
    }
    

}

int main( ){

    int num[] = {3, 4, 6, 7, 8, 1, 2, 5, 9};
    int size = sizeof(num)/sizeof(num[0]);

    printf("Original: \t");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", num[i]);
    }
    
    printf("\n");

    sort(num, size);

}