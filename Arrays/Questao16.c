#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Crie um vetor com 5 elementos. Desenvolva uma função que receba um vetor e retorne valor de U
//dado por:



//Funcao:
float valorVetU(int vet[], int tamanho)
{
    float valorU = 1;
    float count = 5;

        for(int i = 0; i < tamanho; i++)
        {
            valorU *= count / vet[i];
            count += 2;
        }

    return valorU * 8;
}


//Testando a Funcao

/*
int main()
{
    int numeros[5];

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 5; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("O Valor de U e: %.1f", valorVetU(numeros, 5));

    return 0;
}

//*/
