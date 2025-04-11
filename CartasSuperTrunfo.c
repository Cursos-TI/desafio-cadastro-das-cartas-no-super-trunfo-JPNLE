#include <stdio.h>

int main() {
    
    char estado1, estado2, nome1[50], nome2[50];
    int cidade1, cidade2, populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("Primeira Carta!\n");

    printf("Informe de qual estado pertence(A a H): \n");
    scanf(" %c", &estado1);

    printf("Informe de qual cidade pertence(1 a 4): \n");
    scanf(" %d", &cidade1);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", &nome1);

    printf("Informe a populacão da cidade: \n");
    scanf(" %d", & populacao1);

    printf("Informe a área da cidade(em km²): \n");
    scanf(" %f", &area1);

    printf("Informe o PIB da cidade(em bilhões): \n");
    scanf(" %f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosTuristicos1);

    printf("Segunda Carta!\n");

    printf("Informe de qual estado pertence(A a H): \n");
    scanf(" %c", &estado2);

    printf("Informe de qual cidade pertence(1 a 4): \n");
    scanf(" %d", &cidade2);

    printf("Informe o nome da cidade: \n");
    scanf(" %[^\n]", &nome2);

    printf("Informe a populacão da cidade: \n");
    scanf(" %d", & populacao2);

    printf("Informe a área da cidade(em km²): \n");
    scanf(" %f", &area2);

    printf("Informe o PIB da cidade(em bilhões): \n");
    scanf(" %f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf(" %d", &pontosTuristicos2);

    float densidadePop1 = populacao1 / area1;
    float densidadePop2 = populacao2 / area2;
    float pibPerCapta1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapta2 = (pib2 * 1000000000) / populacao2;

    printf("Resumo - Primeira Carta\nCódigo da carta: #%c0%d\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2fkm²\nDensidade Populacional: %.2f hab/km²\nPIB: %.2f bilhões\nPIB per Capta: %.2f reais\nNúmero de pontos Turísticos: %d pontos turísticos\n", estado1, cidade1, nome1, populacao1, area1, densidadePop1, pib1, pibPerCapta1, pontosTuristicos1);
    printf("\n");
    printf("Resumo - Segunda Carta\nCódigo da carta: #%c0%d\nCidade: %s\nPopulação: %d habitantes\nÁrea: %.2fkm²\nDensidade Populacional: %.2f hab/km²\nPIB: %.2f bilhões\nPIB per Capta: %.2f reais\nNúmero de pontos Turísticos: %d pontos turísticos\n", estado2, cidade2, nome2, populacao2, area2, densidadePop2, pib2, pibPerCapta2, pontosTuristicos2);

    return 0;


}
