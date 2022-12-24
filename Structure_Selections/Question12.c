#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

// Faça um programa que peça dois números, base e expoente. Mostre o primeiro número elevado ao
// segundo número. Não utilize a função de potência da linguagem.

int main()
{
    int base = 0, expoente = 1;  
    int potencia = 1;
    
    printf("CHECANDO POTENCIA\n\n");
    printf("Informe a base: ");
        scanf("%i", &base);
    printf("Informe o expoente: ");
        scanf("%i", &expoente);

    for (int i = expoente; i >= 1; i--)
    {
        potencia *= base;
    }
   
   printf("\nO valor da potência será: %i", potencia);

    return 0;
}
