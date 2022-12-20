#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//Implemente um algoritmo que leia 5 números e os armazene em um vetor. Mostre o menor elemento
//do vetor, dentre os elementos com índice ímpar.

/*
int main()
{
    int numeros[5];
    int menorValor = 99999;

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 5; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("O Menor Valor do VETOR é: ");
        for(int i = 1; i < 5; i += 2)
        {
            if (numeros[i] < menorValor)
            {
                menorValor = numeros[i];
            }
        }

    printf("%i", menorValor);


    return 0;
}
//*/
