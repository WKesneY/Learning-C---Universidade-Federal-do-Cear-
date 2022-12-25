#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Exiba o valor de F dado por:

int main(int argc, char const *argv[])
{
    float soma = 7;
    int count = 121; 

    for(int i = 20; i <= 80; i += 5)
    {
        soma += (float)i / count;
        count -= 7;
    }

    printf("O valor de R é:%.2f", soma);
    return 0;
}
