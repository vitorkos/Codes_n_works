/*
Em certas areas cientificas, � muito comum o uso e aplica��o de MATRIZES
E em situa��es como essa, � ideal alocar uma memoria suficiente para os dados, sem amis nem menos

Para alocar memoria para uma matriz, usamos o conceito de PONTEIRO PARA PONTEIRO
Uma variavel ponteiro est� alocada na memoria como qualquer outra
Portanto, podemos criar um ponteiro que contem o endere�o de memoria de um outro ponteiro

TIPO **nome_ponteiro;

EXEMPLO ::: PONTEIRO PRA PONTEIRO

#include<stdio.h>
int main()
{
    int a = 5, *b, **c;
    b = &a;
    c = &b
    printf(%d\n%d\n%d\n, a, *b, *(*c));
    return 0;
}
VAI SER PRINTADO O 5 NAS TR�S VEZES

Sabemos que um ponteiro pode ser usado para referenciar um
vetor alocado dinamicamente:

int *p;
p = (int *)malloc(5 * sizeof(int);

A mesma coisa acontece com um ponteiro pra ponteiro, so que neste
caso o vetor alocado � de ponteiros;

int **p;
p = (int *)malloc(5 * sizeof(int *);

Como cada posi��o do vetor  e um ponteiro para inteiro, podemos
associar cada posi��o dinamicamente com um vetor de inteiros;

int **p;
int i;
p = (int *) malloc(3 * sizeof(int))

for(i = 0; i < 5; i++){
    p[i] = (int *)malloc(3 * sizeof(int))
}


DE MANEIRA ESUMIDA ::: PARA CRIAR MATRIZES DINAMICAMENTE:::

CRIE UM PONTEIRO PRA UM PONTEIRO
ASSOCIE UM VETOR DE PONTEIROS DINAMICAMENTE COME SSE PONTEIRO DE PONTEIROS
O TAMANHO DESSE VETOR � O NUMERO DE LINHAS DA MATRIZ
CADA POSI��O DO VETOR SER� ASSOCIADO COM UM OUTRO VETOR DO TIPO
CADA UM DESTES VETORES � UMA LINHA DA MATRIZ

*/

//exemplo aloca��o para uma matriz 4X3

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int **p, i, j;
    //aloca um array de ponteiros, um para cada linha
    p = (int **) malloc(4 * sizeof(int *));
    //cada um dos ponteiros recebera um array de inteiros
    for(i = 0; i< 4; i++){
        p[i] = (int *) malloc(3 * sizeof(int));
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &p[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            printf("%d", p[i][j]);
        }
    //desalocando memoria usada
    for(i =0; i < 4; i++){
        free(p[i]);
        }
    }
    free(p);

    return 0;
}
