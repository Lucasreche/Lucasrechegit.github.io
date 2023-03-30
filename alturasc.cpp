#include <iostream>

using namespace std;

int main()
{
    int N, cont, soma;
    double somaaltura, mediaalturas, menor16;


    printf("Quantas pessoas serao digitadas?");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; i++)
    {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade:");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }
    soma = 0;
    for(int i = 0; i < N; i++)
    {
        somaaltura = somaaltura + alturas[i];
    }
    mediaalturas = somaaltura / N;
    printf("\nAltura media: %.2lf\n", mediaalturas);

    cont = 0;
    for(int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            cont = cont + 1;
        }
    }
    menor16 = cont * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", menor16);

    for(int i = 0; i < N; i++)
    {
        if (idades[i] < 16)
        {
            printf("%s\n", nomes[i]);
        }
    }

        return 0;
    }
