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

    printf("Digite a letra que representa o estado (A-H):");
    scanf(" %c", &estado);

    printf ("Digite o codigo da carta (ex:01 a 04):");
    scanf("%s", &codigo);

    printf("digite o nome da cidade:");
    scanf("%s", &nome);

    printf("digite populaçao da cidade:");
    scanf("%d", &população);

    printf("digite a area da cidade em km:");
    scanf("%f", &area);

    printf("digite o pib da cidade:");
    scanf("%f", &pib);

    printf("pontos turisticos da cidade:");
    scanf("%d", &pontos_turisticos);

    //Cadastrar as cartas
    printf("\n-- Carta 1--\n");
    printf("Estado %c\n", estado);
    printf("codigo: %s\n",codigo);
    printf("nome da cidade: %s\n",nome);
    printf("populaçao: %d\n", população);
    printf("area: %f\n",area);
    printf("pib:%f\n",pib);
    printf("pontos turisticos: %d\n", pontos_turisticos);
return 0;

}


