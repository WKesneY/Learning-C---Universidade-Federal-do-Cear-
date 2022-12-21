#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 5


void inverterStr(char s[], int tamanho)
{
    char temp;

    for(int i = 0; i < tamanho / 2; i++)
    {
        temp = s[i];
        s[i] = s[tamanho - 1 - i];
        s[tamanho - 1 - i] = temp;

    }
}

int checarInverso(char a[], char b[])
{

    if(strlen(a) != strlen(b))

        return 0;

        else{

            char copia[20];
            strcpy(copia, a);

            inverterStr(copia, strlen(copia));

            if(strcmp(copia, b) == 0)
            {
                return 1;
            } else return 0;
        }
}

/*
int main()
{
    setlocale(0, "Portuguese");
    char palavra[50];
    char palavra2[50];

    gets(palavra);
    gets(palavra2);

    if(checarInverso(palavra, palavra2) == 1)
    {
        printf("INVERSO OK");
    }
    else printf("INVERSO NAO");
    inverterStr(palavra, 5);
    printf("%s", palavra);

    return 0;

}
*/


void inverteVet(int vet[], int vetB[], int tamanho)
{
    int j = 0;

    for(int i = tamanho - 1; i >= 0; i--)
    {
        vetB[j] = vet[i];
        j++;
    }

}

//*
int main()
{

    setlocale(0, "Portuguese");
    int vet[5];
    int vet2[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Informe o Elemento do Índice [%i]: ", i);
            scanf("%i", &vet[i]);
    }

    inverteVet(vet, vet2, 5);
    for(int i = 0; i < 5; i++)
        {
            printf("%i ", vet2[i]);
        }





    return 0;
}
//*/

void removeElemento(int vet[], int *tamanho, int ind)
{

    for(int i = ind; i < *tamanho; i++)
    {
        vet[i] = vet[i + 1];

        (*tamanho)--;
    }
}

/*
int main()
{

    int vet[TAMANHO]= {5,4,8,9,7};
    int ind = 2;


    for(int i = 0; i < 5; i++)
    {
        printf("[%i]", vet[i]);
    }
}
*/
