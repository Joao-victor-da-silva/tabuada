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

int tabuas()
{
    for (int parado = 1; parado <= 10 ; ++parado)
    {
        printf("Tabuada do %d\n", parado);
        for (int joaoo = 1; joaoo <= 10 ; ++joaoo)
        {
            printf("%d X %d = %d\n", parado, joaoo, parado * joaoo);
        }
    }
    return 0;
}
