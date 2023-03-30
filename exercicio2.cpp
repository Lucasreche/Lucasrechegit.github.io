#include <iostream>

using namespace std;

int main()
{
    int operacao, num1, num2;

    do
    {
        printf("\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n0 - Sair\n\n");
        scanf("%d", &operacao);

        if(operacao > 0 && operacao < 5)
        {
            printf("\n\nDigite dois numeros inteiros (separados por virgula)\n\n");
            scanf("%d,%d", &num1, &num2);
        }

        switch(operacao)
        {
        case 0:
            printf("Saindo....\n");
            break;
        case 1:
            printf("Soma: %d2\n", num1 + num2);
            break;
        case 2:
            printf("Subtracao: %d2\n", num1 - num2);
            break;
        case 3:
            printf("Multiplicacao: %d2\n", num1 * num2);
            break;
        case 4:
            while(num2 == 0)
            {
                printf("nao existe divisao por zero!\nDigite outro valor:");
                scanf("%d",&num2);
            }
            printf("Divisao: %d2\n", num1 / num2);
            break;
        default:
            printf("Opcao invalida!!!\nDigite outra operacao:\n");

        }

    }
    while(operacao != 0);
    return 0;
}
