#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define TAMANHO 8

int vetorImpares (int vet[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vet[i] % 2 == 0)
        {
            return 0; //false
        }
    }

    return 1; //true
}

/*
int main()
{
    int numeros[TAMANHO];

    printf("Informe os valores do VETOR:\n");
        for(int i = 0; i < TAMANHO; i++) //Informando valores do VETOR.
        {
            scanf("%i", &numeros[i]);
        }

    if (vetorImpares(numeros, TAMANHO) == 1) //Usando função para checar o VETOR.
    {
        printf("Todos os valores sao impares.");
    }else printf("Nem todos os valores sao impares.");
}
//*/
