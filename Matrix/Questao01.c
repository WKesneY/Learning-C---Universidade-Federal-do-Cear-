#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

//QUESTAO 1
/*
int main()
{
    int matriz [4][4] = {{4, 6, 8, 12},
                        {1, 9, 4, 3},
                        {8, 6, 11, 13},
                        {3, 7, 5, 2}};
    int soma = 0, produto = 1;
    int maior = -99999;
    int menor = 99999;


    printf("Letra A:\n");
       for (int i = 0; i < 4; i++)
       {
           printf("%i, ", matriz[1][i]);
       }

    printf("\nLetra B:\n");
       for (int i = 0; i < 4; i++)
       {
           printf("%i, ", matriz[i][2]);
       }

    printf("\nLetra C:\n");
       for (int i = 0; i < 4; i++)
       {
           soma += matriz[3][i];
       }
    printf("%i", soma);

    printf("\nLetra D:\n");
       for (int i = 0; i < 4; i++)
       {
           produto *= matriz[i][0];
       }
    printf("%i", produto);

    printf("\nLetra E:\n");
       for (int i = 0; i < 4; i++)
       {
         if( maior < matriz [i][1])
         {
             maior = matriz[i][1];
         }
       }
    printf("%i", maior);

    printf("\nLetra F:\n");
       for (int i = 0; i < 4; i++)
       {
          if (menor > matriz[i][i])
          {
              menor = matriz[i][i];
          }
       }
    printf("%i", menor);


    maior = -99999;
    printf("\nLetra G:\n");
       for (int i = 0; i < 4; i++)
       {
           for(int j = 0; j < 4; j++)
           {
               if (maior < matriz[i][j])
               {
                   maior = matriz[i][j];
               }
           }
       }
    printf("%i", maior);

       return 0;
}
//*/
