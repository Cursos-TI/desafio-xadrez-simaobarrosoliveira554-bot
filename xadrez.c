#include <stdio.h>

// --------------------------------------
// Função recursiva para o movimento da TORRE
// Move-se em linha reta (para a direita)
// --------------------------------------
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Direita (%d)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva
}

// --------------------------------------
// Função recursiva para o movimento do BISPO
// Move-se na diagonal (Cima, Direita)
// Também utiliza loops aninhados para representar
// movimentos horizontais e verticais simultâneos
// --------------------------------------
void moverBispo(int casasVerticais, int casasHorizontais, int passoVertical, int passoHorizontal) {
    if (passoVertical > casasVerticais) return; // condição de parada do movimento vertical
    
    // Loop interno: movimento horizontal em cada passo vertical
    for (int i = 1; i <= casasHorizontais; i++) {
        printf("Cima, Direita (%d,%d)\n", passoVertical, i);
    }
    
    moverBispo(casasVerticais, casasHorizontais, passoVertical + 1, passoHorizontal + 1); // chamada recursiva
}

// --------------------------------------
// Função recursiva para o movimento da RAINHA
// Move-se em linha reta (para a esquerda)
// --------------------------------------
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // condição de parada
    printf("Esquerda (%d)\n", atual);
    moverRainha(casas, atual + 1); // chamada recursiva
}

// --------------------------------------
// Movimento complexo do CAVALO
// Duas casas para cima e uma para a direita (em L)
// Usa loops aninhados e controle de fluxo (break/continue)
// --------------------------------------
void moverCavalo() {
    int movVertical = 2; // duas casas para cima
    int movHorizontal = 1; // uma casa para a direita

    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= movVertical; i++) {
        // Loop interno representa tentativa de mover horizontalmente
        for (int j = 1; j <= movHorizontal + 1; j++) {
            if (j > movHorizontal && i < movVertical) {
                // Interrompe antes do último movimento horizontal
                continue; 
            }

            if (i < movVertical) {
                printf("Cima (%d)\n", i);
                break; // Sai do loop horizontal e volta ao vertical
            } else {
                printf("Direita (%d)\n", j);
            }
        }
    }
}

int main() {
    // --------------------------------------
    // TORRE - usando recursividade
    // --------------------------------------
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre, 1);

    // --------------------------------------
    // BISPO - usando recursividade + loops aninhados
    // --------------------------------------
    int casasBispoVert = 3;
    int casasBispoHoriz = 3;
    printf("\nMovimento do BISPO:\n");
    moverBispo(casasBispoVert, casasBispoHoriz, 1, 1);

    // --------------------------------------
    // RAINHA - usando recursividade
    // --------------------------------------
    int casasRainha = 8;
    printf("\nMovimento da RAINHA:\n");
    moverRainha(casasRainha, 1);

    // --------------------------------------
    // CAVALO - loops aninhados complexos
    // --------------------------------------
    printf("\n");
    moverCavalo();

    return 0;
}
