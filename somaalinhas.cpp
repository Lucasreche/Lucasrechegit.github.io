#include <iostream>

using namespace std;

int main()
{
    int L, C;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &L);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &C);

    double mat[L][C];
    double vet[L];
    for (int i = 0; i < L; i++)
    {
        printf("Digite os elementos da %da. linha:", i + 1);
        for (int j = 0; j < C; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    for(int i = 0; i < L; i++)
    {
        vet[i] = 0;
        for(int j = 0; j < C; j++)
        {
            vet[i]= vet[i] + mat[i][j];
        }

    }
    printf("VETOR GERADO:\n");
    for (int i = 0; i < L; i++)
    {
        printf("%.1lf\n", vet[i]);
    }






    return 0;
}
