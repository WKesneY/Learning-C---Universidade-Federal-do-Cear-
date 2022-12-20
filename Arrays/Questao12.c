#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Implemente uma função que receba um vetor de inteiros e retorne o produto dos elementos ímpares
//do vetor.

int produtoVetImpares(int vet[], int tamanho)
{
    int produtoImpares = 1;

    for(int i = 0; i < tamanho; i++)
    {
        if (vet[i] % 2 != 0)
        {
            produtoImpares *= vet[i];
        }
    }

    return produtoImpares;
}

//Testando a Funcao:

/*
int main()
{
    int numeros[5];


        printf("Informe os Elementos do Vetor:\n");
        for(int i = 0; i < 5 ; i++)
        {
            printf("Elemento do Indice [%i]: ", i);
            scanf("%i", &numeros[i]);
        }

        printf("O Produto dos Elementos Impares e: %i", produtoVetImpares(numeros, 5));




    return 0;
}
//*/
