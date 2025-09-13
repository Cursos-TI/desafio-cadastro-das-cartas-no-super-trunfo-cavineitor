#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char codigo1[4];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da segunda carta
    char codigo2[4];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cálculo da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    // Cadastro da segunda carta
    printf("\nDigite o codigo da segunda carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculo da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Exibindo os dados das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas
    printf("\n=== Comparacao ===\n");
    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional (menor vence): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}