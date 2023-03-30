#include <iostream>

int main(){
    int idade, cont;
    double media, soma;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if (cont <= 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else{

        soma = 0;
        cont = 0;
        while (idade >= 0){
            soma = soma + idade;
            cont = cont + 1;
            scanf("%d", &idade);
        }
        media = soma / cont;
        printf("MEDIA = %.2lf\n", media);

    }

    return 0;
}
