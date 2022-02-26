#include <stdio.h>
#include <stdlib.h>

int main() {
    float comidaValor, valorTotal;
    int quantidade, input;

    printf("Insira o código do produto:  ");
    scanf("%d", &input);

    printf ("Insira a quantidade comprada do produto:  ");
    scanf("%d", &quantidade);

    switch (input) {
        case 1:
            comidaValor = 16;
            break;

        case 2:
            comidaValor = 25;
            break;

        case 3:
            comidaValor = 20;
            break;

        case 4:
            comidaValor = 6.50;
            break;

        case 5:
            comidaValor = 8;
            break;

        default:
            printf("Entrada inválida. \n");
            exit(1);
    }

    valorTotal = comidaValor * quantidade;
    printf ("Valor a ser pago:  R$ %.2f", valorTotal);

    return 0;
}
