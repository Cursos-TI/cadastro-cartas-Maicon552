#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    char estado1;
    char codigo_da_carta1[50];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeros_de_pontos_turisticos1;

    // VARIÁVEIS CARTA 2
    char estado2;
    char codigo_da_carta2[50];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeros_de_pontos_turisticos2;

    // --- ENTRADA DE DADOS CARTA 1 ---
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes do % limpa o cache

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeros_de_pontos_turisticos1);

    // --- ENTRADA DE DADOS CARTA 2 ---
  
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2); // O espaço antes do % limpa o cache

    printf("Digite o código da carta: ");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeros_de_pontos_turisticos2);

    // --- EXIBIÇÃO DE DADOS CARTA 1 ---
  
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", numeros_de_pontos_turisticos1);

    // --- EXIBIÇÃO DE DADOS CARTA 2 --- 

    
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", numeros_de_pontos_turisticos2);


    return 0;
}