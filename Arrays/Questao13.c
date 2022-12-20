#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Desenvolva uma função que receba um vetor de inteiros e retorne a média dos elementos do vetor.

float mediaVet(int vet[], int tamanho)
{
    int somaElementos = 0;
    float mediaElementos = 0;

        for(int i = 0; i < tamanho; i++)
        {
            somaElementos += vet[i];
        }

    return mediaElementos = somaElementos / tamanho;

}

//Testando a Funcao:

/*
int main()
{
    int numeros[5];

        printf("Informe os Elementos do Vetor:\n");
            for(int i = 0; i < 5; i++)
            {
                printf("Elemento do Indice [%i]: ", i);
                scanf("%i", &numeros[i]);
            }

        printf("\nA Media dos Elementos e: %.1f", (mediaVet(numeros, 5)));





    return 0;
}
//*/
