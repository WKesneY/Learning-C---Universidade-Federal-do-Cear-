#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100
//*
int senhaString(char s[])
{
    for(int i = 0; i < s[i] != '\0'; i++)
    {
        if (strlen(s) >= 4 && strlen(s) <= 8 && quantVogais(s) >= 2 && quantConsoante(s) >= 2)
        {
             return 1; //Senha V�lida
        }
        else return 0; //Senha Inv�lida;
    }


}
//*/
/*
int main()
{
    setlocale(0, "Portuguese");
    char senha[TAMANHO];

    printf("Informe a Nova Senha:\n");
        gets(senha);


        if (senhaString(senha) == 1)
        {
            printf("\n\nSenha V�lida.");
        }else printf("\n\nSenha Inv�lida.");

    return 0;
}
//*/



