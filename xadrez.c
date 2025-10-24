#include <stdio.h>

int main() {
    // ------------------------------
    // Movimentação da TORRE (usa for)
    // ------------------------------
    int i;
    int casasTorre = 5; // Número de casas que a Torre vai se mover
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ------------------------------
    // Movimentação do BISPO (usa while)
    // ------------------------------
    int j = 1;
    int casasBispo = 5; // Número de casas que o Bispo vai se mover
    printf("\nMovimento do BISPO:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d)\n", j);
        j++;
    }

    // ------------------------------
    // Movimentação da RAINHA (usa do-while)
    // ------------------------------
    int k = 1;
    int casasRainha = 8; // Número de casas que a Rainha vai se mover
    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda (%d)\n", k);
        k++;
    } while (k <= casasRainha);

    // ------------------------------
    // Movimentação do CAVALO (usa loops aninhados)
    // ------------------------------
    int linha, coluna;
    int casasBaixo = 2;   // Duas casas para baixo
    int casasEsquerda = 1; // Uma casa para a esquerda

    printf("\nMovimento do CAVALO:\n");

    // Loop externo: movimenta o Cavalo para baixo (duas casas)
    for (linha = 1; linha <= casasBaixo; linha++) {
        printf("Baixo (%d)\n", linha);

        // Loop interno: após as duas casas para baixo,
        // move uma casa para a esquerda (usando while)
        if (linha == casasBaixo) {
            int mov = 1;
            while (mov <= casasEsquerda) {
                printf("Esquerda (%d)\n", mov);
                mov++;
            }
        }
    }


    return 0;
}
