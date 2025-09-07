#include <stdio.h>

int main(void) {
    /* ---------- parâmetros movimento de cada peça percorrida ---------- */

    const int PASSOS_TORRE  = 5;  // Move-se para direita
    const int PASSOS_BISPO  = 5;  // Move-se para diagonal: Cima + Direita
    const int PASSOS_RAINHA = 8;  // Move-se para esquerda

    // CAVALO :DOIS PARA BAIXA E UM PARA ESQUERDA
    const int SALTOS_CAVALO = 1; // Move-se em salto em "L"
    const int CAVALO_BAIXO  = 2; // Move-se para duas vezes para baixo
    const int CAVALO_ESQ = 1; // Move-se em uma vez para esquerda

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

    /* -------------------- CAVALO (for) ------------------- */
   printf("\nMovimento do Cavalo (L = Duas vezes Baixo + Uma vez Esquerda):\n");
    // Loop externo: quantidade de "L"
    for (int s = 0; s < SALTOS_CAVALO; s++) {
        // Loop interno 1: dois passos para BAIXO (for)
        for (int i = 0; i < CAVALO_BAIXO; i++) {
            printf("Baixo\n");
        }
        // Loop interno 2: um passo para ESQUERDA (while)
        int w = 0;
        while (w < CAVALO_ESQ) {
            printf("Esquerda\n");
            w++;
        }
    }

    return 0;
}   

