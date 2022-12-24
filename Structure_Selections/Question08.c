#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Informa a soma dos números divisíveis por 5 de 55 até 123.

int main(int argc, char const *argv[])
{
    int soma = 0;

    for(int i = 55; i <= 120; i +=5)
    {
        soma += i;
    }

    printf("A soma dos números divisíveis por 5 de 55 a 123, é: %i", soma);
    
    return 0;
}
