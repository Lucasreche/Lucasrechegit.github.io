#include <iostream>

using namespace std;

int main()
{
    int N;

    printf("Digite o numero desejado:");
    scanf("%d", &N);

    if (N >= 7 && N <= 10)
    {
        printf ("O numero %d esta no intervalo do Grupo A (entre 7 e 10)", N);
    }
    else
    {
        if (N >= 28 && N < 30)
        {
            printf ("O numero %d esta no intervalo do Grupo B (entre 28 e 30)", N);
        }
        else
        {
            if ((N > 35 && N <= 40) || (N >= 90 && N < 100))
            {
                printf ("O numero %d esta no intervalo do Grupo C (entre 35 e 40 ou entre 90 e 100)", N);

            }
            else
            {
                if ((N == 100) || (N >= 200 && N <= 300) || (N > 500 && N < 600))
                {
                    printf ("O numero %d esta no intervalo do Grupo D ( igual a 100 ou entre 200 e 300 ou entre 500 e 600)", N);
                }
                else{
                    printf ("O numero %d nao esta entre nenhum dos intervalos.", N);
                }
            }
        }
    }

    //


    return 0;
}
