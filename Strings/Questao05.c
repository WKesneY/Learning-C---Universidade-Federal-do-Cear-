#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100

int quantEspeciais(char s[])
{
    int count;
        for(int i = 0; s[i] != '\0'; i++ )
        {
            if (isalnum(s[i]) == 0)
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
    char especiais[TAMANHO];

    printf("Informe a String:\n");
        gets(especiais);

    printf("O Total de Caracteres Numéricos é: [%i]", quantEspeciais(especiais));
    return 0;
}
//*/
