#include <iostream>

using namespace std;

int main()
{
    int N, cont;
    printf("Qual a ordem da matriz?");
    scanf ("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", mat[i][i]);
    }
    cont = 0;
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                cont = cont + 1;
            }
        }
    }
    printf("\nQuantidade de numeros negativos = %d\n", cont);
    return 0;
}
