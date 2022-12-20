#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

#define TAMANHO 8


int main()
{
    int numeros[6] = {54, 42, 33, 18, 75, 72};

    printf("Elementos com Indice Impar do VETOR:\n"); //Checando Indices Impares
        for (int i = 1; i < 6; i += 2)
        {
            printf("%i ", numeros[i]);
        }

    printf("\n\nElementos do VETOR Com Valor Par:\n"); //Checando Valores Pares
        for (int i = 0; i < 6; i++)
        {
            if(numeros[i] % 2 == 0)
            {
                printf("%i ", numeros[i]);
            }

        }

}

