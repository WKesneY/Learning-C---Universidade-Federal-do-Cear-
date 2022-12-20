#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Dado o vetor de inteiros [3, 12, 25, 9], escreva uma função que receba um vetor de inteiros e retorne
//a soma dos elementos do vetor.

int somaVet(int vet[], int tamanho)
{
    int somaElementos = 0;

    for(int i = 0; i < tamanho; i++)
    {
        somaElementos += vet[i];
    }

    return somaElementos;
}
/*
int main()
{
    int numeros[4] = {3, 12, 25, 9};

    printf("A Soma dos Elementos do VETOR e: %i", somaVet(numeros, 4));

    return 0;
}

//*/
