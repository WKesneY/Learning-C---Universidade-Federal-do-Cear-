#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Escreva a soma dos números múltiplos de 3 e por 5 entre 356 e 455.

int main()
{
    int soma = 0;

    for(int i = 360; i <= 455; i += 15)
    {
       soma += 15;
    }

    printf("A soma dos múltiplos de 3 e 5 entre 356 e 455 é: %i", soma);
    
    return 0;
}
