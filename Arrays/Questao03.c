#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>


//Inicialize um vetor com os n�meros 102, 450, 29, 559, 315, 94 e 120. Escreva os elementos com
//�ndice m�ltiplo de 3. Em seguida, mostre os elementos divis�veis por 5.


int main()
{
    setlocale(0, "Portuguese");
    int numeros[7] = {102, 450, 29, 559, 315, 94, 120};

    printf("Mostre os Indices do VETOR com Valor M�ltiplo de 3:\n");
        for(int i = 0; i < 7; i+=3)
        {
            printf("%i ", numeros[i]);
        }

    printf("\n\nMostre os Elementos Divis�veis por 5:\n");
        for(int i = 0; i < 7; i++)
        {
            if(numeros[i] % 5 == 0)
            printf("%i ", numeros[i]);
        }


    return 0;
}

