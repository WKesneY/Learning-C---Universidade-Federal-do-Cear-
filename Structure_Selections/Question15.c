#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Exiba o valor dado por:
// S = 1/5 + 3/10 + 5/15 + 7/20 ... + 17/45.

int main()
{
    float soma = 0;
    int count = 5;

    for(int i = 1; i <= 17; i += 2)
    {
        soma += (float)i / count;
        count += 5; 
    }
    
    printf("O valor de S é: %.2f", soma);

    return 0;
}
