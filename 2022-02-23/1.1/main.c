#include <stdio.h>
#define QNTPECAS 2

typedef struct {
    int codigo, quantidade;
    float valor, valorTotal;
} peca;

float calculaValor(float valor, int quantidade) {
    return valor * quantidade;
}

peca informacaoDaPeca(peca peca1) {
    printf("Informe o c�digo da primeira pe�a:  ");
    scanf("%d", &peca1.codigo);

    printf("Informe a quantidade de pe�as compradas:  ");
    scanf("%d", &peca1.quantidade);

    printf("Informe o valor unit�rio da pe�a:  ");
    scanf("%f", &peca1.valor);

    peca1.valorTotal = calculaValor(peca1.valor, peca1.quantidade);
    return peca1;
}

int main (void) {
    peca pecas[QNTPECAS];
    float totalVenda = 0;

    for (int i = 0; i < QNTPECAS; i++) {
        pecas[i] = informacaoDaPeca(pecas[i]);
    }

    for (int i = 0; i < QNTPECAS; i++) {
        totalVenda += pecas[i].valorTotal;
    }
    printf ("VALOR A PAGAR:  R$ %.2f", totalVenda);

    return 0;
}
