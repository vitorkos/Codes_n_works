#include<stdio.h>
#include<stdlib.h>

int main()
{
    //declara��o das variaveis

    float valorreal;
    float dolar;
    float convert;
    dolar = 4.87;

    printf("/n Insira o valor a ser convertido de dol�res para reais:\n");
    scanf("%f", &valorreal);

    convert = valorreal * dolar;

    printf("A convers�o ficaria em: %f", convert);

return 0;
}
