#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//


//Funcao:

void atualizaElementoVet (int vet[], int tamanho, int novoValor, int indiceVet)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (i == indiceVet)
        {
            vet[i] = novoValor;
        }

    }
}

//Testando a Funcao:
/*
int main()
{
    int numeros[4];
    int indice, novoValor;

     printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 4; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("Informe Qual Indice Deseja Mudar: ");
        scanf("%i", &indice);
    printf("\nInforme Qual Sera o Novo Elemento: ");
        scanf("%i", &novoValor);

    atualizaElementoVet(numeros, 4, novoValor, indice);

    printf("O VETOR Atualizado e:\n");

    for(int i = 0; i < 4; i++)
    {
        printf("%i ", numeros[i]);
    }
    return 0;
}
//*/
