#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Desenvolva um programa que tenha o seguinte menu e realize os cálculos necessários de acordo com
// a opç?o do menu escolhida. O programa encerrará apenas quando o usuário escolher a opç?o de
// Sair.

int main()
{
    int opcaoMenu;
    int num = 0;

    do
    {
        printf("MENU:");
        printf("\n1 - Triplo do Número.");
        printf("\n2 - 15/100 do Número.");
        printf("\n3 - Cubo do Número.");
        printf("\n4 - Sair.");

        printf("\n\nOpç?o: ");
            scanf("%i", &opcaoMenu);

        if(opcaoMenu == 1)
        {
            printf("\nInforme o número: ");
                scanf("%i", &num);

            printf("\nO triplo do número é: %i\n", num *= 3);
        }
        else if (opcaoMenu == 2)
        {
            printf("\nInforme o número: ");
                scanf("%i", &num);
            num -= (num * 0.85);
            
            printf("\n15/100 do número escolhido: %i\n", num);
        }
        else if (opcaoMenu == 3)
        {
            printf("\nInforme o número: ");
                scanf("%i", &num);
            
            printf("O cubo do número escolhido é: %i\n", num = pow(num, 3));
        }
        
        
        
    }
    while (opcaoMenu != 4);
    printf("\n\nProgama encerrado.");
    
    
    return 0;
}
