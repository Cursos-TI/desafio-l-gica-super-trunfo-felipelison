#include <stdio.h>

int main (){
    
    unsigned long int populacao, populacao2;
    int turismo, turismo2;
    char estado[2], estado2[2], codigoCarta[4], codigoCarta2[4], cidade[20], cidade2[20];
    float area, area2, pib, pib2, pibpercapita, densidade, pibpercapita2, densidade2, SuperPoder, SuperPoder2;
    //CARTA 1
    printf("Carta 1\n");

    //ESTADO
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf("%s", estado);
    //CODIGO
    printf("Código da Carta (A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigoCarta);
    //CIDADE
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    //POPULAÇAO
    printf("População da cidade: ");
    scanf("%lu", &populacao);
    //AREA
    printf("Área da cidade: ");
    scanf("%f", &area);
    //PIB
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    //PONTOS TURISTICOS
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo);
    
    //CARTA 2
    printf("\nCarta 2\n");

    //ESTADO
    printf("Estado: ");
    scanf("%s", estado2);
    //CODIGO
    printf("Código da Carta: ");
    scanf("%s", codigoCarta2);
    //CIDADE
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    //POPULAÇAO
    printf("População da cidade: ");
    scanf("%lu", &populacao2);
    //AREA
    printf("Área da cidade: ");
    scanf("%f", &area2);
    //PIB
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    //PONTOS TURISTICOS
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    //CALCULOS
    densidade = populacao / area;
    pibpercapita = pib / populacao;
    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    SuperPoder = populacao + area + pib + turismo + pibpercapita + (1/densidade);
    SuperPoder2 = populacao2 + area2 + pib2 + turismo2 + pibpercapita2 + (1/densidade2);

    //IMPRIMIR CARTAS
    printf("\nMostrando carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turismo);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f reais\n\n", pibpercapita);

    printf("Mostrando carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n\n", pibpercapita2);

    //COMPARAÇÃO
    printf("DUELO!\n");
    printf("\nPopulação: ");
    
    if (populacao > populacao2)
    {
        printf("carta 1 venceu!");
    } else {
        printf("carta 2 venceu!");
    }
    
    printf("\nÁrea: ");
    if (area > area2)
    {
        printf("carta 1 venceu!");
    } else {
        printf("carta 2 venceu!");
    }
    
    printf("\nPIB: ");
    if (pib > pib2)
    {
        printf("carta 1 venceu!");
    } else {
        printf("carta 2 venceu!");
    }
    
    printf("\nPontos turísticos: ");
    if (turismo > turismo2)
    {
        printf("carta 1 venceu!");
    } else {
        printf("carta 2 venceu!");
    }
    
    printf("\nDensidade Populacional: ");
    if (densidade > densidade2)
    {
        printf("carta 2 venceu!");
    } else {
        printf("carta 1 venceu!");
    }
    
    printf("\nPIB per capita: ");
    if (pibpercapita > pibpercapita2)
    {
        printf("carta 1 venceu!");
    } else {
        printf("carta 2 venceu!");
    }
    
    printf("\nSuper Poder: ");
    if (SuperPoder > SuperPoder2)
    {
        printf("carta 1 venceu!\n");
    } else {
        printf("carta 2 venceu!\n");
    }

    return 0;
}
