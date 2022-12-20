#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>


// Escreva um programa que armazena 6 números em um vetor e informa o maior elemento do vetor
//que é divisível por 5.

/*
int main()
{
    int numeros[6];
    int maiorValor = -99999;

    printf("Informe os Elementos do VETOR:\n");
        for(int i = 0; i < 6; i++)
        {
            printf("Valor do Indice [%i]:", i);
            scanf("%i", &numeros[i]);
        }
    printf("\nMaior Elemento do Vetor Divisivel Por 5: ");
        for(int i = 0; i < 6; i++)
        {
            if (numeros[i] % 5 == 0)
            {
                if(numeros[i] > maiorValor)
                {
                    maiorValor = numeros[i];
                }
            }
        }
    printf("%i", maiorValor);

    return 0;
}
//*/
