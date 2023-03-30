#include <iostream>

using namespace std;

int main()
{
    int N, i;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite um numero: ");
        scanf ("%lf", &vet[i]);
    }

    printf("\nValores: ");

    for (i = 0; i < N; i++)
    {
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma = 0;
           for (i = 0; i < N; i++)
    {
        soma = soma + vet[i];
    }
printf("Soma = %.2lf\n", soma);

media = soma / N;

printf("Media = %.2lf\n", media);

    return 0;
}
