#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Escreva os números divisíveis por 5 de 550 até 690.

int main(int argc, char const *argv[])
{
    for(int i = 550; i < 690; i += 5)
    {
        printf("%i ", i);
    }
    
    return 0;
}
