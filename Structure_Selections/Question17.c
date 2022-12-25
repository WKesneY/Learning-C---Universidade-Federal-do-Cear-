#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//  Exiba o valor de V dado por:

int main(int argc, char const *argv[])
{
    float soma = 0;
    int count = 7; 

    for(int i = 17; i >= 7; i--)
    {
        soma += (float)i / count;
        count += 2;
    }

    printf("O valor de R é:%.2f", soma);
    return 0;
}
