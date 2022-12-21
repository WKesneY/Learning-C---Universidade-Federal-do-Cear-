#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define COLUNA 4
#define LINHA 4


//QUESTAO 3:
/*
int main()
{
    int matriz[LINHA][COLUNA];
    int count = 0;

    printf("Recebendo os valores da matriz:\n");
        for(int i = 0; i < LINHA; i++)
        {
            for (int j = 0; j < COLUNA; j++)
            {
                printf("\nInforme o valor de [%i][%i]: ", i, j);
                scanf("%i", &matriz[i][j]);
            }
        }

    printf("\n A Matriz:\n");
        for(int i = 0; i < LINHA; i++)
        {
            printf("\n");
            for (int j = 0; j < COLUNA; j++)
            {
                printf("%i ", matriz[i][j]);
            }
        }

    //CHECANDO O TOTAL DE 0 NA MATRIZ:
    for(int i = 0; i < LINHA; i++)
        {
            for (int j = 0; j < COLUNA; j++)
            {
                if (matriz[i][j] == 0)
                {
                    count++;
                }
            }
        }

    printf("\n\nExistem %i numeros zero na matriz.", count);


    return 0;
}
//*/
