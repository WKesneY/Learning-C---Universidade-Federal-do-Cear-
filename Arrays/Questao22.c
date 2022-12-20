#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

//


//Funcao:
int checarVezesVet (int vet[], int tamanho, int valorChecar)
{
    int count = 0;

        for(int i = 0; i < tamanho; i++)
        {
            if(valorChecar == vet[i])
            {
                count++;
            }
        }

    return count;
}

//Testando a Funcao:

/*
int main()
{
    int numeros[5];
    int valor;

     printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 5; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }

    printf("\nInfome o Valor a Ser Checado:\n");
        scanf("%i", &valor);

    printf("O Valor Aparece %i Vezes no Vetor.",  checarVezesVet (numeros, 5, valor));





    return 0;
}
//*/
