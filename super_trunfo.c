#include <stdio.h>

// escolha do atributo a ser comparado
// 1 = População
// 2 = Área
// 3 = PIB
// 4 = Densidade Populacional
// 5 = PIB per capita
#define ATRIBUTO 1   // <<< troque esse número para mudar o atributo comparado

int main(void) {
    /* ----------------- CARTA 1 ----------------- */
    char estado1[3];
    char codigo1[10];
    char nome1[30];
    int  populacao1;
    float area1;
    float pib1;
    int  pontos_turisticos1;

    /* ----------------- CARTA 2 ----------------- */
    char estado2[3];
    char codigo2[10];
    char nome2[30];
    int  populacao2;
    float area2;
    float pib2;
    int  pontos_turisticos2;

    /* ======= ENTRADA: CARTA 1 ======= */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado1);

    printf("Código da carta: ");
    scanf(" %9s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %29[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ======= ENTRADA: CARTA 2 ======= */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado2);

    printf("Código da carta: ");
    scanf(" %9s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %29[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    /* ======= CÁLCULOS ======= */
    float dens1 = (area1 > 0.0f) ? ( (float)populacao1 / area1 ) : 0.0f;
    float dens2 = (area2 > 0.0f) ? ( (float)populacao2 / area2 ) : 0.0f;

    float pibpc1 = (populacao1 > 0) ? (pib1 / (float)populacao1) : 0.0f;
    float pibpc2 = (populacao2 > 0) ? (pib2 / (float)populacao2) : 0.0f;

    /* ======= COMPARAÇÃO ======= */
    printf("\n=== Comparação de cartas ===\n");

    if (ATRIBUTO == 1) {  // População
        printf("Atributo: População\n");
        printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (ATRIBUTO == 2) {  // Área
        printf("Atributo: Área\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (ATRIBUTO == 3) {  // PIB
        printf("Atributo: PIB\n");
        printf("Carta 1 - %s (%s): %.2f bilhões\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", nome2, estado2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (ATRIBUTO == 4) {  // Densidade Populacional
        printf("Atributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, dens1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, dens2);
        if (dens1 < dens2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (dens2 < dens1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    else if (ATRIBUTO == 5) {  // PIB per capita
        printf("Atributo: PIB per capita\n");
        printf("Carta 1 - %s (%s): %.8f\n", nome1, estado1, pibpc1);
        printf("Carta 2 - %s (%s): %.8f\n", nome2, estado2, pibpc2);
        if (pibpc1 > pibpc2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pibpc2 > pibpc1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");
    }

    return 0;
}
