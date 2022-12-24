#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//Desenvolva um programa que leia um número inteiro e positivo n. Apresente os números inteiros
//de 1 a n


int main()
{
    int num = 0;
    printf("Informe um número: ");
        scanf("%i", &num);
    printf("Os números de 1 ao número escolhido, são: ");
    
    for(int i = 1; i <= num; i++)
    {
        printf("%i ", i);
    }

    return 0;
}



