#include <stdio.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado;                  // Estado (letra A-H)
    char codigo[4];              // Código da carta (ex: A01)
    char nomeCidade[50];        // Nome da cidade
    unsigned long int populacao; // População da cidade
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Número de pontos turísticos
    float densidade;            // Densidade populacional calculada
    float pibPerCapita;         // PIB per capita calculado
    float superPoder;           // Super poder calculado
};

int main() {
    struct Carta carta1;
    struct Carta carta2;

    // ===== Entrada de dados: Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);
    printf("População: ");
    scanf("%lu", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // ===== Entrada de dados: Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // ===== Cálculo de Atributos Derivados =====
    // Densidade = população / área
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    // PIB per capita = PIB * 1e9 / população (convertendo bilhões para reais)
    carta1.pibPerCapita = carta1.pib * 1e9 / carta1.populacao;
    carta2.pibPerCapita = carta2.pib * 1e9 / carta2.populacao;

    // Super Poder = soma de todos os atributos relevantes
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        (float)carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1.0f / carta1.densidade);

    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        (float)carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1.0f / carta2.densidade);

    // ===== Exibição dos Dados das Cartas =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // ===== Comparação entre cartas =====
    // 1 se carta1 vence, 0 se carta2 vence
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta 1 venceu (%d)\n", (carta1.populacao > carta2.populacao));
    printf("Área: Carta 1 venceu (%d)\n", (carta1.area > carta2.area));
    printf("PIB: Carta 1 venceu (%d)\n", (carta1.pib > carta2.pib));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", (carta1.pontosTuristicos > carta2.pontosTuristicos));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (carta1.densidade < carta2.densidade)); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Super Poder: Carta 1 venceu (%d)\n", (carta1.superPoder > carta2.superPoder));

    return 0;
}
