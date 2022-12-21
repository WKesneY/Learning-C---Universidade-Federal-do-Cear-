#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100

int quantConsoante(char s[])
{
    int count = 0;

        for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] != 'a' && s[i] != 'A' && s[i] != 'e' && s[i] != 'E' && s[i] != 'i' &&
               s[i] != 'I' && s[i] != 'o' && s[i] != 'O' && s[i] != 'u' && s[i] != 'U')
            {
                count++;
            }

        }



    return count;
}
/*
int main()
{
    char consoantes[TAMANHO];

    printf("Informe a String. Somente Letras:");
        gets(consoantes);

    printf("%s", consoantes);

    printf("Total de Consoantes: %i", quantConsoante(consoantes, TAMANHO));

    return 0;
}
//*/
