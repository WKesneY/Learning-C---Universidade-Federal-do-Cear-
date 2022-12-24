#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Leia um número e mostre o seu fatorial. Exemplo, fatorial de 5! = 5 × 4 × 3 × 2 × 1 = 120

int main()
{
    int num = 0;
    int fatorial = 1;

    printf("Informe um número para fatorar: ");
        scanf("%i", &num);

    for( ; num >= 1; num --)
    {
        fatorial *= num;
    }
    
    printf("O fatorial do número escolhido é: %i", fatorial);

    return 0;
}
