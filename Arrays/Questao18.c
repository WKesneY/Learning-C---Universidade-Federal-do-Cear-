#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define TAMANHO 8


int receberVetor (int vet[])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%i", &vet[i]);
    }
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%i ", vet[i]);
    }

}

/*
int main()
{
    int numeros[TAMANHO];
    receberVetor(numeros);
    return 0;
}
//*/
