#include <stdio.h>

int main() {
    char estado1, estado2;
    int cidade1, cidade2, populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    printf("Primeira Carta!\n");

    printf("Informe de qual estado pertence(A a H): \n");
    scanf(" %c", &estado1);

    printf("Informe de qual cidade pertence(1 a 4): \n");
    scanf("%d", &cidade1);

    printf("Informe a populacão da cidade: \n");
    scanf("%d", & populacao1);

    printf("Informe a área da cidade(em km²): \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade(em bilhões): \n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Segunda Carta!\n");

    printf("Informe de qual estado pertence(A a H): \n");
    scanf(" %c", &estado2);

    printf("Informe de qual cidade pertence(1 a 4): \n");
    scanf("%d", &cidade2);

    printf("Informe a populacão da cidade: \n");
    scanf("%d", & populacao2);

    printf("Informe a área da cidade(em km²): \n");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade(em bilhões): \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Resumo - Primeira Carta\nCódigo da carta: #%c0%d\nPopulação: %d habitantes\nÁrea: %2.fkm²\nPIB: %2.f bilhões\nNúmero de pontos Turísticos: %d pontos turísticos\n", estado1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\n");
    printf("Resumo - Segunda Carta\nCódigo da carta: #%c0%d\nPopulação: %d habitantes\nÁrea: %2.fkm²\nPIB: %2.f bilhões\nNúmero de pontos Turísticos: %d pontos turísticos\n", estado2, cidade2, populacao2, area2, pib2, pontosTuristicos2);
    return 0;
}
