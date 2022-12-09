/*
Os programas precisam de espa�o paraa os dados que v�o ser processados
Usamos VARIAVEIS
Toda variavel precisa ser declarada antes de ser usada
Nem sempre � possivel saber o quanto de mem�ria um programa vai precisar

O uso da memoria pode ser dividido em :
VARIAVEIS GLOBAIS- o espa�o para a variavel existe enquanto o programa existir
VARIAVEIS LOCAIS- o espa�o existe s� enquanto a fun��o onde a cariavel foi declarada estiver sendo executada

Uma maneira de manipular dados � usando ARRAYS
Uma variavel array possui um endere�o que podemos atribuir a um ponteiro
Quando trabalhamos com arrays, assumimos que eles tenham uma dimens�o maxima
Porem, esse o array fosse maior e a memoria insuficiente

Para isso podemos alocar memoria

Usamos as fun��es:

malloc() - usada para alocar espa�oi para armazenarmos valores de qualquer tipo
recebe como parametro o tamanho do espa�o da memoria
retorna um ponteiro para a primeira posi��o do array alocado ou NULL

SINTAXE:

(TIPO_DO_DADO *) *malloc(TAMANHO_DO_DADO_A_SER_ALOCADO*sizeof(TIPO_DO_DADO))

calloc() -
realloc() - aumenta ou diminui o tamanho do array
recebe como parametro um ponteiro para o bloco de memoria alocado antes e o tamanho em byts do espa�o de memoria a ser alocado

TIPO_DO_DADO *realloc(VARIAVEL, TAMANHO_DA_VARIAVELEMBITS * sizeof(TIPO))


free() - desaloca toda a memoria

free(NOME_DA_VARIAVEL)


*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *vet, i;

    //aloca um array com x elementeos inteiros

    vet = (int *) malloc(20 * sizeof(int));

    if (vet == NULL){
        printf("memoria insuficiente");
    }
    else{}

    for(i = 0; i < 20; i++){
        vet[i] = i;
    }
    for(i = 0; i < 20; i++){
        printf("%d \n", vet[i]);
    }

    return 0;
}














