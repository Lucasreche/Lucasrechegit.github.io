int main()
{
    int a;
    float m, j;
    scanf("%f", &m); //inserir o valor do montante.
    scanf("%f", &j); //inserir o valor dos juros.
    for(a=1 ; a<=12 ; a++){ //entra o looping de 12 meses.
    printf("%f\n", juroscompostos(&m, &j, &a)); //imprime cada valor dos juros(desde o primeiro mes ate o decimo segundo).
    }
    return 0;
}

float juroscompostos(float *montante, float *juros, int *i){

float comp;
    comp = (*montante) * pow((1 + (*juros)), *i);//formula dos juros compostos, o valor de i e o valor do looping que coloquuei.
    return comp; //retorna o valor dos juros.
}
