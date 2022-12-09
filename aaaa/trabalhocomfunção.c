#include<stdio.h>

//fun��o para os nomes das frutas
void nomeFruta (int i, int ndefrutas, char frutas[ndefrutas][i]){
  for (i = 0; i != ndefrutas; i++) {
    printf("\nInsira a fruta %d: ", i + 1);
    scanf("%s", &frutas[i]);
  }
}

//fun��o para os pre�os das frutas
void precoFruta (int i, int ndefrutas, float precos[ndefrutas], char frutas[ndefrutas][i]){
  for (i = 0; i != ndefrutas; i++) {
    printf("\nInsira o preco da fruta %s: ", frutas[i]);
    scanf("%f", &precos[i]);
  }
}

//fun��o para o usuario comprando
void usuarioComprando (int ndefrutas, int i, float precos[ndefrutas]){
  int codigo;
  float total = 0;

  while (codigo != -1) {
    printf(
        "\nInsira o codigo das frutas que ir� comprar (para SAIR insira -1): ");
    scanf("%d", &codigo);

    for (i = 0; i != ndefrutas; i++) {
      if (codigo == i) {
        total = total + precos[i];
      } else {
      }
    }
    printf("\nCarrinho: R$%.2f ", total);
  }

  printf("\nTotal a ser pago: R$%.2f ", total);
}

//fun��o principal
int main()
{

    //informando o inteiro T de itens
    int ndefrutas;
    printf("\nInsira o numero de frutas a serem vendidas: ");
    scanf("%d", &ndefrutas);

    //contador
    int i;

    //matriz das frutas
    char frutas[ndefrutas][15];

    //vetor dos pre�os
    float precos[ndefrutas];


    //fun��o do la�o de repeti��o para o nome das frutas
    nomeFruta(i, ndefrutas, &frutas[ndefrutas][15]);

    //fun��o do la�o de repeti��o para o pre�o das frutas
    precoFruta(i, ndefrutas, &precos[ndefrutas], &frutas[ndefrutas][15]);


    //lista
    printf("\n\n-----Lista-----\n\n");

    for(i = 0; i != ndefrutas; i++){
        printf("\nCOD: %d - %s ----- R$%.2f \n", i, frutas[i], precos[i + ndefrutas]);
    }

    //o usuario comprando
    usuarioComprando(ndefrutas, i, &precos[ndefrutas]);

    return 0;
}
