/*
uma string nunca � atribuida com scanf
char[9]
%s
n�o usamos ponteiros
n�o precisamos do [] pois queremos ler a str inteira
para atribuir valor a uma string pode se usar duas fun��es
fgets(NOME DA STRING, TAMANHO DA STRING, stdin)
gets(NOME DA STRING)
toda str termina com \0 e umaw str atribuida com fgets tem \n
*/

#include<stdio.h>


char nome()
{
    char n[200];
    printf("insira o seu nome: ");
    gets(n);

    return n[200];
}
int main()
{

    printf("o seu nome eh %s", nome());

    return 0;
}

//para retornar uma string, deve-se usar ponteiros
// o retorno (NULL) � o retorno de um ponteiro sem valor
