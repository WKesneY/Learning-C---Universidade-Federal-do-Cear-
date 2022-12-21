#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>



//QUESTAO 2
/*
int main()
{
    int matriz[4][4] = {{3, 16, 7, 11},
                        {13, 4, 10, 8},
                        {21, 8, 6, 5},
                        {5, 9, 1, 15}};

    int soma = 0, produto = 1;
    int menor = 99999, maior = -99999;


    printf("Letra A:\n");
       for (int i = 0; i < 4; i++)
       {
           printf("%i ", matriz[2][i]);
       }

    printf("\nLetra B:\n");
       for (int i = 0; i < 4; i++)
            printf("%i ", matriz[i][1]);

    printf("\nLetra C:\n");
       for (int i = 0; i < 4; i++)
            soma += matriz[i][4];

    printf("%i ", soma);

    printf("\nLetra D:\n");
       for (int i = 0; i < 4; i++)
        produto *= matriz[2][i];

    printf("%i", produto);

    printf("\nLetra E:\n");
       for (int i = 0; i < 4; i++)
        if (menor > matriz[3][i])
            menor = matriz[3][i];

    printf("%i", menor);

    maior = -99999;
    printf("\nLetra F:\n");
       for (int i = 0; i < 4; i++)
        if(maior < matriz[i][i])
            maior = matriz[i][i];

    printf("%i", maior);



    menor = 99999;
    printf("\nLetra G:\n");
       for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (menor > matriz[i][j])
                menor = matriz[i][j];

    printf("%i", menor);
    printf("\nLetra H:\n");
        soma = 0;
        for(int i = 0; i < 4; i++)
            for(int j =0; j < 4; j++)
                soma += matriz[i][j];



    printf("%f", (float)soma / 16);

    printf("\nLetra I:\n");
        for(int i = 0; i < 4; i++)
            soma += matriz[1][i];


    printf("%f", (float)soma / 4 );


  return 0;
}
//*/
