#include <stdio.h>

int main() {
    // ==========================================
    // 1. O ALMOXARIFADO (Declaração de Variáveis)
    // ==========================================
    
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Caixa vazia para o feitiço
    float pib_per_capita1;         // Caixa vazia para o feitiço

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // Caixa vazia para o feitiço
    float pib_per_capita2;         // Caixa vazia para o feitiço

    printf("=== SUPER TRUNFO - NIVEL AVENTUREIRO ===\n\n");

    // ==========================================
    // 2. A COLETA DOS INGREDIENTES (Entrada - Carta 1)
    // ==========================================
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); 
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes, ex: 699.28): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ==========================================
    // 3. O CALDEIRÃO DA BRUXA (Processamento - Carta 1)
    // ==========================================
    densidade_populacional1 = (populacao1 / area1);
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;

    // ==========================================
    // 2. A COLETA DOS INGREDIENTES (Entrada - Carta 2)
    // ==========================================
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes, ex: 300.50): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // ==========================================
    // 3. O CALDEIRÃO DA BRUXA (Processamento - Carta 2)
    // ==========================================
    densidade_populacional2 = (populacao2 / area2);
    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    // ==========================================
    // 4. A VITRINE (Saída - Exibição dos Resultados)
    // ==========================================
    printf("\n===================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n===================================\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("===================================\n");

    return 0;
}