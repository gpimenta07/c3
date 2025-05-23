#include <stdio.h>

// ==========================
// Funções Recursivas
// ==========================

// Movimento recursivo da Torre (horizontal para direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Movimento recursivo da Rainha (horizontal para esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento recursivo + loop aninhado do Bispo (diagonal cima-direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    // Loop aninhado: vertical (i) externo e horizontal (j) interno
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// ==========================
// Função com loops complexos
// ==========================

// Movimento complexo do Cavalo: 2 casas para cima e 1 para a direita (em "L")
void moverCavalo() {
    int linha, coluna;

    for (linha = 2; linha > 0; linha--) {
        printf("Cima\n");

        // Quando chegar na última casa para cima, entra no movimento horizontal
        if (linha == 1) {
            for (coluna = 0; coluna < 2; coluna++) {
                if (coluna == 1) break; // quebra antecipada para mover apenas uma casa
                printf("Direita\n");
            }
        }
    }
}

// ==========================
// Função Principal
// ==========================

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 4;
    int casasRainha = 6;

    // ==========================
    // Movimento da Torre
    // ==========================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // ==========================
    // Movimento do Bispo
    // ==========================
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // ==========================
    // Movimento da Rainha
    // ==========================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ==========================
    // Movimento do Cavalo
    // ==========================
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
