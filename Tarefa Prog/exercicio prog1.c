#include<stdio.h>
#include<stdlib.h>
int main()
{

    int num, sucessor, antecessor;

    printf("\n Digite um n�mero: ");
    scanf("%d", &num);

    sucessor = num + 1;
    antecessor = num - 1;

    printf("O n�mero sucessor �: %d\n", sucessor);
    printf("O n�mero antecessor �: %d\n", antecessor);
return 0;
}
