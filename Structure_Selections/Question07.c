#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Mostre a soma dos números ímpares de 410 até 551

int main()
{
    int soma = 0;

    for(int i = 411; i <= 451; i++)
    {
        soma += i;
    }

    printf("A soma total dos ímpares de 410 a 551 é: %i", soma);
    
    return 0;
}
