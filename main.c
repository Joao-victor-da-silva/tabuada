#include <stdio.h>
#include "Funcoes.h"

int main()
{
    int opcao;

    printf("\nO que deseja fazer ?\n");
    printf("\n 1. Tabuada \n 2. Todas as tabuadas \n 3. Sair\n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            tabuadausuario();
            break;

        case 2:
            tabuas();
            break;

        case 3:
            return 0;

        default:
            opcao = 0;
    }
    main();
    return 0;
}
