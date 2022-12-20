#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

//Inicialize um vetor com os números 71, 62, 16, 11, 25 e 31. Mostre os elementos com índice par.
//Em seguida, mostre os elementos do vetor com valor par


//Usando função:

int indiceValorPar (int vet[], int tamanho, int *indicePar, int *elementosPar)
{

        for (int i = 0; i < tamanho; i += 2) //Checando os Indices Pares.
        {
            *indicePar = i;
            printf("%i ", i);
        }


        for(int i = 0; i < tamanho; i++) //Checando os Valores Pares.
        {
            if (vet[i] % 2 == 0)
            {
                *elementosPar = vet[i];
                printf("%i ", *elementosPar);
            }
        }


}

/*

int main()
{
    int numeros[6] = {71, 62, 16, 11, 25, 31};
    int valoresPar, indicePar;

    printf("Indices com valor par:\n");
        printf("%i ", indiceValorPar(numeros, 6, &indicePar, NULL));


    printf("\n\nElementos com valor par:\n");
        printf("%i ", indiceValorPar(numeros, 6, NULL, &valoresPar));


    return 0;


}
//*/

//Questão normal:

/*
int main()
{
    int numeros[6] = {71, 62, 16, 11, 25, 31};

    printf("Mostrando Elementos Pares do VETOR:\n");
        for(int i = 0; i < 6; i++) //Checando os Valores Pares.
        {
            if (numeros[i] % 2 == 0)
            {
                printf("%i ", numeros[i]);
            }
        }

    printf("\n\nMostrando Indices de Valor Par:\n");
        for (int i = 0; i < 6; i += 2) //Checando os Indices Pares.
        {

                printf("%i ", numeros[i]);
        }

    return 0;
}
//*/






