#include <iostream>

using namespace std;

int main()
{
    int i, nota, soma;
    double N;
    printf("Quantas notas serao digitadas?\n");
    scanf("%lf", &N);

    soma = 0.00;
    for (i = 1; i <= N; i++){
        printf("Digite a %d Nota: ", i);
        scanf("%d", &nota);
        soma = soma + nota;

    }
    printf ("A media das Notas digitadas eh: %.1lf", soma / N);



    return 0;
}
