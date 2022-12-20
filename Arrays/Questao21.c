
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//


//Funcao:

int checarVet (int vet[], int tamanho, int novoValor)
{
    for(int i = 0; i < tamanho; i++)
    {
        if (vet[i] == novoValor)
        {
            return i;
        }
    }

    return -1;
}


//Testando a Funcao:

/*
int main()
{
    int numeros[5];
    int valorNovo;

     printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 5; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("Informe o Valor a Ser Checado:\n");
        scanf("%i", &valorNovo);

        if (checarVet(numeros, 5, valorNovo) == -1)
        {
            printf("\nValor Nao Se Encontra No VETOR.");
        }
            else printf("\nValor Se Encontra No VETOR.");

    return 0;
}
//*/
