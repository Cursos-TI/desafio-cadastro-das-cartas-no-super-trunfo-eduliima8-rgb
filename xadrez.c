#include <stdio.h>

int main(void) {
    /* ---------- parâmetros movimento de cada peça percorrida ---------- */

    const int PASSOS_TORRE  = 5;  // Move-se para direita
    const int PASSOS_BISPO  = 5;  // Move-se para diagonal: Cima + Direita
    const int PASSOS_RAINHA = 8;  // Move-se para esquerda

    /* -------------------- TORRE (for) -------------------- */
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= PASSOS_TORRE; i++) {
        printf("Direita\n");
    }

    /* -------------------- BISPO (while) ------------------ */
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int i = 0;
    while (i < PASSOS_BISPO) {
        printf("Cima, Direita\n");   // combinação para representar a diagonal
        i++;
    }

    /* -------------------- RAINHA (do-while) -------------- */
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < PASSOS_RAINHA);

    return 0;
}
