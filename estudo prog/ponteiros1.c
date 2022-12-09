/*
Ponteiros e referencia s�o sinonimos
A memoria RAM de um pc � representada por um conjunto de bytes
A sequencia que um byte ocura na sequencia � chamado de ENDERE�O
Cada variavel na memoria possui um endere�o que � dado pelo operador &
Assim, de I for uma variavel, seu endere�o � dado por &I

Um ponteiro � um tipo especial de variavel que armazena um endere�o
Um ponteiro pode ter o valor de NULL, um endere�o invalido
Se um ponteiro P armazena o endere�o de uma vari�vel I, falamos que "P aponta para I" ou "P � o endere�o de I" ou que P � uma referencia � I
Se um ponteiro P tem valor diferente de NULL ent�o *P � o VALOR da variavel apontada por P
Assim, se I � uma variavel e P vale &I ent�o "*P" � o mesmo que "I"

Sua declara��o de da: TIPO DO PONTEIRO *NOME DO PONTEIRO;

int *p = NULL --> aponta um valor de memoria inexistente

int *p, x;
p = &x; --> aponta um valor de memoria existente

* --> acessa o conteudo da variavel daquele endere�o apontado
& --> aponta somente o endere�o da variavel referenciada

*/


#include<stdio.h>

int main()
{

    //exemplos de ponteiros

    int a;

    int *p;
    p =  &a;

    printf("insira o valor da variavel a: ");
    scanf("%d", &a);

    printf("o valor de a � %d", *p);

    return 0;
}

//caso no print do valor de A, o ponteiro P n�o possuisse *, seria printado somente o endere�o de A
