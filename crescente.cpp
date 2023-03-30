#include <iostream>

using namespace std;

int main()
{
    int a, b;
    printf("Digite dois numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    while (a != b)
    {
        if (a < b)
        {
            printf("CRESCENTE\n");
        }
        else if (a > b)
        {
            printf("DECRESCENTE\n");
        }
        printf("Digite outros dois numeros: \n");
        scanf("%d", &a);
        scanf("%d", &b);
    }
    return 0;
}
