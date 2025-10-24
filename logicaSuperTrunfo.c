#include <stdio.h>

// Programa: Comparação de Cartas do Super Trunfo
// Autor: Guilherme Lima
// Objetivo: Cadastrar duas cartas e comparar um atributo (PIB per capita)

int main() {
    // --- Declaração das variáveis das duas cartas ---
    char estado1[3], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[3], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // --- Cadastro da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", cidade1); // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cadastro da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos adicionais ---
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // --- Exibição dos cálculos ---
    printf("\n=== Dados calculados ===\n");
    printf("Carta 1 - %s (%s): Densidade = %.2f hab/km² | PIB per capita = %.6f\n",
           cidade1, estado1, densidade1, pibPerCapita1);
    printf("Carta 2 - %s (%s): Densidade = %.2f hab/km² | PIB per capita = %.6f\n",
           cidade2, estado2, densidade2, pibPerCapita2);

    // --- Comparação ---
    // Escolha do atributo: PIB per capita
    printf("\n=== Comparação de Cartas (Atributo: PIB per capita) ===\n");

    printf("Carta 1 - %s (%.6f)\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s (%.6f)\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else 
    if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}