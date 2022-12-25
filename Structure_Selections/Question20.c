#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Crie um algoritmo que receba vários números inteiros e positivos. Imprima o produto dos números
// ímpares digitados e a soma dos pares. O algoritmo encerra quando um número menor ou igual a
// zero é recebido pelo programa.

int main(int argc, char const *argv[])
{
    int num;
    int somaPar = 0;
    int produtoImpar = 1;

    while (1)
    {
        printf("Informe um número inteiro: ");
        scanf("%i", &num);

        if(num <= 0)
        {
            break;
        }
        
        if(num % 2 == 0)
        {
            somaPar += num;
        } 
            else
            {
                produtoImpar *= num;
            }
    }

    printf("\n\nA soma dos número pares é: %i.", somaPar);
    printf("\nO produto dos números impares é: %i.", produtoImpar);
    
    return 0;
}

