#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100

int quantMaiusculas(char s[])
{
    int count = 0;

       for (int i = 0; i < strlen(s); i++)
       {
           if (isupper(s[i]) != 0)
           {
               count++;
           }
       }

   return count;
}

/*
int main()
{
    setlocale(0, "Portuguese");
    char maisculas[TAMANHO];

    gets(maisculas);
    printf("%i", quantMaiusculas(maisculas));


    return 0;
}

//*/
