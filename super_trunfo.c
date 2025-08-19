#include <stdio.h>

int main() {
    //Programa para cadastrar Duas cartas de cidades (estilo super trunfo)

    char estado; //Uma letra de A a H representado um dos oitos estados
    char codigo[10];//um codigo de 3 caracteres, sendo a primeira letra do estado e dois digitos de 01 a 04
    char nome[30];//nome da cidade
    int população; //populaçao da cidade
    float area;//area da cidade em km
    float pib; //pib da cidade
    int pontos_turisticos;//quantidade de pontos turisticos da cidade



    // -------- Carta 1 --------
    char estado1;
    char codigo1[10];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // -------- Carta 2 --------
    char estado2;
    char codigo2[10];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada da Carta 1
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (A01 a H04): ");
    scanf(" %9s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (use ponto): ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões (use ponto): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (A01 a H04): ");
    scanf(" %9s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %29[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² (use ponto): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões (use ponto): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Saída - Exibir Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Saída - Exibir Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
