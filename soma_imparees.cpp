#include <iostream>

using namespace std;

int main()
{
    int X, Y, soma, troca, i;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);
    if (X > Y)
    {
        troca = X;
        X = Y;
        Y = troca;
    }
    soma = 0;
    for  (i = X+1; i < Y; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
    }
    printf("Soma dos imparees = %d\n", soma);
    return 0;
}
