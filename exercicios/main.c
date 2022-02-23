#include <stdio.h>
#define QNTPECAS 2

typedef struct {
    int codigo, quantidade, valor, valorTotal;
} peca;

int calculaValor(int valor, int quantidade) {
    return valor * quantidade;
}

peca informacaoDaPeca(peca peca1) {
    printf("Informe o código da primeira peça:  ");
    scanf("%d", peca1->codigo);

    printf("Informe a quantidade de peças compradas:  ");
    scanf("%d", peca1->quantidade);

    printf("Informe o valor unitário da peça:  ");
    scanf("%d", peca1->valor);

    peca1.valorTotal = calculaValor(peca1.valor, peca1.quantidade);
    return peca1;
}

int main (void) {
    peca pecas[QNTPECAS];

    for (int i = 0; i < QNTPECAS; i++) {
        pecas[i] = informacaoDaPeca(pecas[i]);
    }

    return 0;
}
