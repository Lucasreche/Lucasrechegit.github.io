#include <iostream>

using namespace std;

int main()
{
double vettemp[10], soma, media, maior, menor;

    for (int i = 0; i < 10; i++)
    {
        printf("\nInforme a %da temperatura: ", i + 1);
        scanf("%lf", &vettemp[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nA %.2da temperatura digitada eh: %5.2lf\n", i + 1, vettemp[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (vettemp[i] >= 20)
        {
        printf("\nA temperatura %5.2lf: Esta Quente\n", vettemp[i]);
        }
        else
        {
        printf("\nA temperatura %5.2lf: Esta Frio\n", vettemp[i]);
        }
    }

    soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma = soma + vettemp [i];
    }

    media = soma / 10;
    printf("\n\nA media das temperaturas informada eh: %.2lf", media);

    maior = -100;
    for (int i = 0; i < 10; i++)
    {
        if (vettemp[i] > maior)
        {
        maior = vettemp[i];
        }
    }

    printf("\n\nA maior temperatura digitada eh: %5.2lf", maior);

    menor = 100;
    for (int i = 0; i < 10; i++)
    {
        if (vettemp[i] < menor)
        {
        menor = vettemp[i];
        }

    }

    printf("\n\nA menor temperatura digitada eh: %5.2lf", menor);

    return 0;

}
