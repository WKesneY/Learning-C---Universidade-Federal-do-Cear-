#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define COLUNA 6
#define LINHA 6

//*
int main()
{
    int matriz[LINHA][COLUNA] ={{1,2,3,4,5,6},
                                {7,8,9,0,11,12},
                                {13,14,15,16,17,18},
                                {0,0,0,0,0,0},
                                {0,0,0,0,0,0},
                                {0,0,0,0,0,0}};

    int count = 0;

    //Recebendo os valores da matriz:
    printf("Valores da Matriz:\n");
    /*
        for(int i = 0; i < LINHA; i++)
        {
            for(int j = 0; j < COLUNA; j++)
            {
                printf("Informe os valores de [%i][%i]: ", i, j);
                scanf("%i", &matriz[i][j]);
            }
        }
    //*/
    printf("\nMATRIZ:\n");
        for(int i = 0; i < LINHA; i++)
        {
            printf("\n");
            for(int j = 0; j < COLUNA; j++)
            {
                printf("%i ", matriz[i][j]);
            }
        }

    //Checando quantos valores maiores que 10 existem na matriz:

    for(int i = 0; i < LINHA; i++)
        {
            for(int j = 0; j < COLUNA; j++)
            {
                if (matriz[i][j] > 10)
                {
                    count++;
                    printf("\n[%i][%i]", i, j);

                }
            }
        }

    printf("\nExistem %i valores maiores que dez na Matriz.", count);

    return 0;
}
//*/
