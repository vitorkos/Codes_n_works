#include<stdio.h>

int main()
{
    float x, y;
    int operacao;

    printf("insira dois valores: ");
    scanf("%f%f", &x, &y);

    printf("insira o numero da operacao: \n");
    printf("media = 1 \n diferenca = 2 \n produto = 3 \n divisao = 4 \n");
    scanf("%d", &operacao);

    if (operacao == 1){
        printf("a media entre os valores � de %f", (x + y) / 2);
    }
    else if(operacao == 2){
        printf("a diferen�a entre os valores � de %f", x- y);
    }
    else if(operacao == 4){
        printf("a divis�o entre os valores � de %f", x / y);
    }
    else if (operacao == 3){
        printf("o produto da soma � de %f", x + y);
    }
    else{
        printf("insira uma opera��o valida");
    }
    return 0;
}
