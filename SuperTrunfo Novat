#include <stdio.h>

// Definição de uma estrutura (struct) chamada "Carta"
// que armazena todos os atributos de uma carta do jogo Super Trunfo
struct Carta {
    char codigo[4]; // Código da cidade (ex: A01, B02)
    unsigned long int populacao; // Número total de habitantes
    float area; // Área em km²
    float pib; // Produto Interno Bruto (em bilhões)
    int pontosTuristicos; // Quantidade de pontos turísticos
    float densidadePopulacional; // Calculada: população / área
    float pibPerCapita; // Calculada: PIB / população
    float superPoder; // Soma total dos atributos (com densidade invertida)
};

int main() {
    // Declaração de duas cartas (cidade/estado) que o usuário irá cadastrar
    struct Carta carta1;
    struct Carta carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código (ex: A01): ");
    scanf("%s", carta1.codigo); // Lê o código da cidade
    printf("População: ");
    scanf("%lu", &carta1.populacao); // Lê a população
    printf("Área (em km²): ");
    scanf("%f", &carta1.area); // Lê a área
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib); // Lê o PIB
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos); // Lê o número de pontos turísticos

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%lu", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Densidade Populacional = população / área
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    // PIB per Capita = PIB / população
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Super Poder = soma de todos os atributos + inverso da densidade
    // A densidade populacional é invertida antes de somar (1 / densidade)
    carta1.superPoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos +
                        carta1.pibPerCapita + (1.0 / carta1.densidadePopulacional);

    carta2.superPoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos +
                        carta2.pibPerCapita + (1.0 / carta2.densidadePopulacional);

    // ===== Exibição dos Dados da Carta 1 =====
    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.6f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    // ===== Exibição dos Dados da Carta 2 =====
    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.6f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    // ===== Comparações Entre Cartas =====
    // Cada comparação imprime 1 se a carta 1 venceu e 0 se a carta 2 venceu
    // Para densidade, o menor valor vence, então usamos operador "<"
    printf("\n=== Comparações ===\n");
    printf("População: %d\n", (carta1.populacao > carta2.populacao));
    printf("Área: %d\n", (carta1.area > carta2.area));
    printf("PIB: %d\n", (carta1.pib > carta2.pib));
    printf("Pontos turísticos: %d\n", (carta1.pontosTuristicos > carta2.pontosTuristicos));
    printf("Densidade populacional (vence menor): %d\n", (carta1.densidadePopulacional < carta2.densidadePopulacional));
    printf("PIB per capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita));
    printf("Super Poder: %d\n", (carta1.superPoder > carta2.superPoder));

    return 0; // Fim do programa
}
