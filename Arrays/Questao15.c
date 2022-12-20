
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Crie um vetor com 6 elementos. Implemente uma função que receba um vetor e retorne valor de T
//dado por:

//Funcao

float valorVetT (int vet[], int tamanho)
{
    float valorT = 0;
    float count = 10;

        for (int i = 0; i < tamanho; i++)
        {
            valorT += (pow(vet[i], 2)) / count;
            count++;
        }

    return valorT;
}

//Testando a Funcao
/*
int main()
{
    int numeros[6];

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 6; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("O Valor de T e: %.2f", valorVetT(numeros, 6));
    return 0;
}
//*/
