#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Apresente a média dos números ímpares de 50 até 85.

int main()
{
    int soma = 0; 
    int count = 0;
    float media = 0;
    
    for(int i = 51; i <= 61; i++)
    {
        soma += i;
        count++;
    }

    printf("A media dos ímpares entre 50 a 85 é: %.2f", media = (float) soma/count);
    
    return 0;
}
