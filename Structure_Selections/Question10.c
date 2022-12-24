#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Informe o produto dos números pares de 43 até 77.

int main()
{
    int produto = 1;

    for(int i = 44; i <= 48; i += 2)
    {
        produto *= i;
    }

    printf("O produto dos pares entre 43 e 77, é: %i", produto); 

    return 0;
}
