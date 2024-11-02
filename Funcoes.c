#include <stdio.h>
#include "Funcoes.h"

int tabuadausuario()
{
    int num;
    printf("Digite o numero da tabuada que deseja:");
    scanf("%d", &num);

    for (int i = 1; i <= 10 ; ++i)
    {
        //int resultado;
        //resultado = num * i;
        printf("%d X %d = %d\n", num, i, num * i);
    }
    return 0;
}


