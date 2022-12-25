#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Informe o valor de R dado por:


int main(int argc, char const *argv[])
{
    float soma = 0;
    int count = 4; 

    for(int i = 1; i <= 20; i++)
    {
        soma += (float)i / count;
        count++;
    }

    printf("O valor de R é:%.2f", soma);
    return 0;
}
