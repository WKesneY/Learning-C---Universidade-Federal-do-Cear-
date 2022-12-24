#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Exiba a média dos números divisíveis por 3 e por 4 menores que 175.

int main()
{
    float media = 0;
    int soma = 0;
    int count = 0;

    for(int i = 12; i <= 168; i++)
    {
        if(i % 12)
        {
            soma += i;
            count++;
        }
    }

    printf("A media dos divisíveis por 3 e 4 menores que 175 é: %.2f", media = (float) soma / count);
    
    return 0;
}
