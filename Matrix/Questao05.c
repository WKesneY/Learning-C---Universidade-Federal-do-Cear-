#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define COLUNA 2
#define LINHA 2
/*
int main()
{
    int matrizUm[LINHA][COLUNA];
    int matrizDois[LINHA][COLUNA];

    int soma = 0;

    //Recebendo os valores da primeira matriz:
    printf("Valores da primeira Matriz:\n");
        for(int i = 0; i < LINHA; i++)
        {
            for(int j = 0; j < COLUNA; j++)
            {
                printf("Informe os valores de [%i][%i]: ", i, j);
                scanf("%i", &matrizUm[i][j]);
            }
        }
    printf("\nMATRIZ 1:\n");
        for(int i = 0; i < LINHA; i++)
        {
            printf("\n");
            for(int j = 0; j < COLUNA; j++)
            {
                printf("%i ", matrizUm[i][j]);
            }
        }


        //Recebendo os valores da segunda matriz:
    printf("\n\nValores da segunda Matriz:\n");
        for(int i = 0; i < LINHA; i++)
        {
            for(int j = 0; j < COLUNA; j++)
            {
                printf("Informe os valores de [%i][%i]: ", i, j);
                scanf("%i", &matrizDois[i][j]);
            }
        }
    printf("\nMATRIZ 2:\n");
        for(int i = 0; i < LINHA; i++)
        {
            printf("\n");
            for(int j = 0; j < COLUNA; j++)
            {
                printf("%i ", matrizDois[i][j]);
            }
        }


        //Somando os elementos de ambas matrizes:
        for(int i = 0; i < LINHA; i++)
        {
            for(int j = 0; j < COLUNA; j++)
            {
                soma += matrizDois[i][j] + matrizUm [i][j];
            }
        }

        printf("\n\nA soma dos elementos de ambas matrizes e: %i.", soma);


    return 0;
}
//*/
