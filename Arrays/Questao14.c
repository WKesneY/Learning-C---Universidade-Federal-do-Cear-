#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>



//Crie um vetor com 11 elementos. Faça uma função que receba um vetor e retorne o valor de S dado
//por:

//Funcao

float valorVetS (int vet[], int tamanho)
{
    float valorS = 0;
    float count = 0;

        for(int i = 0; i < tamanho; i++)
        {
            valorS += (count / vet[i]);
            count++;
        }

    return valorS;

}


//Testando a Funcao:
/*
int main()
{
    int numeros[11];

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 11; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("O Valor de S e: %.4f", valorVetS(numeros, 11));

    return 0;
}
//*/
