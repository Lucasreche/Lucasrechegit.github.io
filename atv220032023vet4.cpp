#include <iostream>

using namespace std;

#define MAX 5

int main()
{
    int vetor1[MAX], vetor2[MAX];
    int i;

    printf("Digite %d valores inteiros:\n", MAX);
    for (i = 0; i < MAX; i++)
    {
        printf("Escreva o %da vetor:\n", i+1);
        scanf("%d", &vetor1[i]);
    }

    for (i = 0; i < MAX; i++)
    {
        vetor2[i] = vetor1[i];
    }

    printf("\n\nVetor1:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("%da posicao do vetor: %d\n", i + 1, vetor1[i]);
    }

    printf("\n\nVetor2:\n");
    for (i = 0; i < MAX; i++)
    {
        printf("%da posicao do vetor: %d\n", i + 1, vetor2[i]);
    }


return 0;
}
