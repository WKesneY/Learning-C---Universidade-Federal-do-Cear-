#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 10

int quantVogais(char s[])
{
    int count = 0;
    for(int i = 0; i < strlen(s); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' ||  s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' || s[i] == 'U')
            {
                count++;
            }

        }



    return count;
}

/*

int main(){
setlocale(0, "Portuguese");

    char vogais[TAMANHO];

    printf("Informe a String:\n");
        gets(vogais);

    printf("\n\nString: %s", vogais);
    printf("\n\nHá um Total de %i Vogais.", quantVogais(vogais, TAMANHO));


return 0;
}
//*/
