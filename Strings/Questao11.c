#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100


int quantPalavras(char s[])
{
    int j = 0;
        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == ' ' || s[i] == ',')
            {
                j++;
            }
        }

    return ++j;


}

/*
int main()
{
    setlocale(0, "Portuguese");
    char str[TAMANHO];

    printf("Informe uma frase:\n");
        scanf(" %[^\n]", &str);

    printf("A quantidade de Palavras é: [%i]", quantPalavras(str));

    return 0;
}
//*/
