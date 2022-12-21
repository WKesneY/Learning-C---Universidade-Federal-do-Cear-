#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define TAMANHO 100
/*
int quantDigito(char s[])
{
    int j = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if (isdigit(s[i]) != 0)
        {
            j++;
        }
    }

    return j;
}

int senhaString2(char senha[])
{
    while (senha)
    {
        if(quantCaracteres(senha) >= 6 && quantCaracteres(senha) >= 12 &&
           quantMaiusculas(senha) == 1 && quantEspeciais(senha) == 1 && quantDigito == 1)
           {
               return 1;
           }
        break;

        else return 0;
        break;
    }

}

int main()
{

    return 0;
}
//*/



/*
int main()
{
   char senha[TAMANHO];
   int digito = 0, letraMaiuscula = 0, caracEspecial = 0;

    printf("Informe a senha: ");
        scanf(" [^\n]", &senha);


    if strlen(senha) >= 6 && strlen <= 12)
    {
        for(int i = 0; senha[i] != '\0'; i++)
            {
                if(isdigit(senha) == 1) digito++;
                if(isupper(senha) == 1) letraMaiuscula++;
                if(ispunct(senha) == 1) caracEspecial++;
            }
        if(digito >= 1 && letraMaiuscula >= 1 && caracEspecial >= 1)
        {
            printf("Senha válida")
        }
    }



    return 0;
}


*/

int senhaStr(char s[])
{
    if( strlen(s) >= 6 && strlen(s) <= 12 && quantMaiusculas(s) >= 1 && quantEspeciais(s) >= 1 && quantCaracteres(s) >=1)
        {
            return 1;
        }
    else return 0;

}

/*
int main()
{
    setlocale(0, "Portuguese");
    char str[TAMANHO];

    printf("Informe a senha:\n");
        scanf(" %[^\n]", &str);

    while (senhaStr(str) != 1)
    {
            printf("\nSENHA INVÁLIDA\nInfome uma nova senha:\n");
                scanf(" %[^\n]", &str);


            if(senhaStr(str) != 1) continue;

            else printf("\n\nSENHA VÁLIDA");
            break;
    }


}


//*/


















