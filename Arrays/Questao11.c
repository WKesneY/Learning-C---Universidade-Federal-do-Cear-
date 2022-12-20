#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Escreva uma função que receba um vetor de inteiros e retorne o produto dos elementos de um vetor.

int produtoVet (int vet[], int tamanho)
{
    int produtoElementos = 1;

        for(int i = 0; i < tamanho; i++)
        {
            produtoElementos *= vet[i];
        }

    return produtoElementos;
}

//Checando a Funcao:

/*
int main()
{
    int numeros[7];


        printf("Informe os Elementos do Vetor:\n");
        for(int i = 0; i < 7; i++)
        {
            printf("Elemento do Indice [%i]: ", i);
            scanf("%i", &numeros[i]);
        }

        printf("\nO Produto dos Elementos e: %i", produtoVet(numeros, 7));


    return 0;
}
//*/
