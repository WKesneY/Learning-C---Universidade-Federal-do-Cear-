#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100

int quantCaracteres(char s[])
{
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]) == 1)
        {
            j++;
        }
    }

    return j;
}
/*

int main()
{
    char caracteres[TAMANHO];
    gets(caracteres);
    printf("%i", quantCaracteres(caracteres));
    return 0;
}
//*/
