#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <locale.h>

#define COLUNA 4
#define LINHA 4
#define TAMANHO 5

/*
int main()
{
    int vendas[LINHA][COLUNA] = {{1101,2293, 4121, 9245},
                                {0, 2, 0, 8},
                                {2, 0, 4, 2},
                                {5, 1, 2, 3}};
    int soma = 0;
    int totalVendidos, produtoVendido = -99999;
    int indice;

    //a) o total de produtos vendidos
    for(int i = 1; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            soma += vendas[i][j];
            totalVendidos = soma;
        }
    }

    printf("\nO Total de Produtos Vendidos: %i;\n", totalVendidos);

    //b) qual o produto mais vendido;


        for(int i = 1; i < LINHA; i++)
    {
        soma = 0;
        for (int j = 0; j < COLUNA; j++)
        {
            soma += vendas[i][j];
            if (produtoVendido < soma)
            {
                produtoVendido = soma;
                indice = i;
            }
        }
    }

    switch(indice)
    {
        case 1:  printf("\nLivros Foram Mais Vendidos");
        break;
        case 2: printf("\nFilmes Foram Mais Vendidos");
        break;
        case 3: printf("\nShows Foram Mais Vendidos");
        break;
    }

    //c) qual usuário comprou mais produtos;

     for(int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {

        }
    }
    return 0;
    }
//*/
