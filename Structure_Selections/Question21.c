#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Desenvolva um programa que tenha o seguinte menu e realize os c�lculos necess�rios de acordo com
// a op�?o do menu escolhida. O programa encerrar� apenas quando o usu�rio escolher a op�?o de
// Sair.

int main()
{
    int opcaoMenu;
    int num = 0;

    do
    {
        printf("MENU:");
        printf("\n1 - Triplo do N�mero.");
        printf("\n2 - 15/100 do N�mero.");
        printf("\n3 - Cubo do N�mero.");
        printf("\n4 - Sair.");

        printf("\n\nOp�?o: ");
            scanf("%i", &opcaoMenu);

        if(opcaoMenu == 1)
        {
            printf("\nInforme o n�mero: ");
                scanf("%i", &num);

            printf("\nO triplo do n�mero �: %i\n", num *= 3);
        }
        else if (opcaoMenu == 2)
        {
            printf("\nInforme o n�mero: ");
                scanf("%i", &num);
            num -= (num * 0.85);
            
            printf("\n15/100 do n�mero escolhido: %i\n", num);
        }
        else if (opcaoMenu == 3)
        {
            printf("\nInforme o n�mero: ");
                scanf("%i", &num);
            
            printf("O cubo do n�mero escolhido �: %i\n", num = pow(num, 3));
        }
        
        
        
    }
    while (opcaoMenu != 4);
    printf("\n\nProgama encerrado.");
    
    
    return 0;
}
