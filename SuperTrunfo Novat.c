#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo versão "Países"
struct Carta {
    char estado;                // Letra do estado (A a H)
    char codigo[4];             // Código da carta (ex: A01, B02)
    char nomeCidade[50];       // Nome da cidade
    unsigned long int populacao; // População da cidade
    float area;                // Área em km²
    float pib;                 // PIB em bilhões de reais
    int pontosTuristicos;      // Número de pontos turísticos
    float densidade;           // Densidade populacional calculada
    float pibPerCapita;        // PIB per capita calculado
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // === Entrada de dados para a Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &carta1.estado); // Espaço antes de %c para ignorar caractere residual no buffer
    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); // Lê até o fim da linha (permite espaços)
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // === Entrada de dados para a Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // === Cálculo dos novos atributos (nível aventureiro) ===
    // Densidade populacional = população / área
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // PIB per capita = PIB / população
    carta1.pibPerCapita = carta1.pib * 1e9 / carta1.populacao; // PIB em reais
    carta2.pibPerCapita = carta2.pib * 1e9 / carta2.populacao;

    // === Exibição da Carta 1 ===
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);

    // === Exibição da Carta 2 ===
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);

    return 0;
}
