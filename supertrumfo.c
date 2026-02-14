#include <stdio.h>
int main() {

    // Variáveis para a Carta 1
    char estado1, codigo1[4],nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;



    printf(" Cadastro da Carta 1 \n"); 
    printf("Estado (A-H):"); scanf(" %c", &estado1);    
    printf("Código da Carta (ex: A01): "); scanf(" %s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);    
    printf("População: "); scanf(" %lu", &populacao1);
    printf("Área (km²): "); scanf(" %f", &area1);
    printf("PIB: "); scanf(" %f", &pib1);
    printf("Número de Pontos Turísticos: "); scanf(" %d", &pontosTuristicos1);

//calculo da densidade populacional e do PIB per capita para a carta 1

    densidadePopulacional1 = (populacao1 / area1);
     pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
     
// Super Poder: soma de tudo

 superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);

//mostrar informacoes carta 2

    printf("Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): "); scanf(" %s", codigo2);
    printf("Nome da Cidade: ");scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf(" %lu", &populacao2);
    printf("Área (km²): "); scanf(" %f", &area2);
    printf("PIB: "); scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf(" %d", &pontosTuristicos2);

//calculo da densidade populacional e do PIB per capita para a carta 2

   densidadePopulacional2 = (populacao2 / area2);
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

// Super Poder: soma de tudo

superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

printf("CARTAS CADASTRADAS \n");
    
    // Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Comparação e Exibição dos Resultados

    printf("\n=== COMPARAÇÃO DE CARTAS (1: Carta 1 vence | 0: Carta 2 vence) ===\n");
    
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    
    // Na densidade populacional, o MENOR valor vence

    printf("Densidade Populacional: %d\n", densidadePopulacional1 < densidadePopulacional2);
    
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    return 0;
}