#include <stdio.h>

int main() {
    // ===============================
    // MOVIMENTO DA TORRE - FOR LOOP
    // ===============================
    printf("Movimento da Torre:\n");

    // A torre se move 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ===============================
    // MOVIMENTO DO BISPO - WHILE LOOP
    // ===============================
    printf("Movimento do Bispo:\n");

    // O bispo se move 5 casas na diagonal "Cima Direita"
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ===============================
    // MOVIMENTO DA RAINHA - DO-WHILE LOOP
    // ===============================
    printf("Movimento da Rainha:\n");

    // A rainha se move 8 casas para a esquerda
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // ===============================
    // MOVIMENTO DO CAVALO - LOOPS ANINHADOS
    // ===============================
    printf("Movimento do Cavalo:\n");

    // O cavalo se move 2 casas para baixo e 1 para a esquerda (formando um "L")

    // Loop externo com FOR para simular o movimento para baixo
    for (int linha = 0; linha < 2; linha++) {
        printf("Baixo\n");

        // Loop interno com WHILE (poderia ser DO-WHILE também)
        // Só executa na última iteração (após as 2 casas para baixo)
        if (linha == 1) {
            int coluna = 0;
            while (coluna < 1) {
                printf("Esquerda\n");
                coluna++;
            }
        }
    }

    return 0;
}
