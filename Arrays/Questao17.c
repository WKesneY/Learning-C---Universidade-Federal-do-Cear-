#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>


//Implemente uma função que insere um elemento no final do vetor

//Funcao:

//Testando a Funcao

void implementaVet (int vet[], int *tamanho, int valor)
{
    vet[*tamanho] = valor;
    (*tamanho)++;
}

/*
int main()
{
    int numeros[1000] = {5,7,8,9,10,11};
    int valor, tamanho = 0;

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 6; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }


    while (tamanho < 1000)
    {
        printf("\nInforme o Novo Valor a Ser Inserido: ");
        scanf("%i", &valor);

        if (valor < 0)
        {
            break;
        }

        implementaVet(numeros, &tamanho, valor);
    }

    printf("O Novo VETOR e:\n");
        for(int i = 0; i < tamanho; i++)
        {
            printf("% i", numeros[i]);
        }

    return 0;
}
//*/
