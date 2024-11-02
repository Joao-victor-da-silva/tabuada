#include <stdio.h>
#include "Funcoes.h"

int main()
{
    int opcao;

    printf("O que deseja fazer ?");
    printf("1. Tabuada \n 2. Todas as tabuadas \n 3. Sair");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            break;
        
        case 2:
            break;

        case 3:
            return 0;
    }
    return 0;
}
