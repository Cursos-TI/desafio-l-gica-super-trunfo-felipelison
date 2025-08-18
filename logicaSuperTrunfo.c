#include <stdio.h>

int main (){
    
    unsigned long int populacao, populacao2;
    int turismo, turismo2, opcao;
    char estado[50], estado2[50], codigoCarta[50], codigoCarta2[50], cidade[50], cidade2[50];
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

    //MENU INTERATIVO

    printf("Qual atributo você escolherá?\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per capita\n");
    printf("7.Super Poder\n");
    scanf("%d", &opcao);
    
    //SWITCH CASE

    switch (opcao)
    {
    case 1:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("População foi o atributo escolhido\n");
        printf("População de %s: %lu\n", cidade, populacao);
        printf("População de %s: %lu\n", cidade2, populacao2);
        if (populacao > populacao2)
    {
        printf("Carta 1 venceu!\n");
    } else if (populacao < populacao2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 2:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("Área foi o atributo escolhido\n");
        printf("Área de %s: %.2f km²\n", cidade, area);
        printf("Área de %s: %.2f km²\n", cidade2, area2);
        if (area > area2)
    {
        printf("Carta 1 venceu!\n");
    } else if (area < area2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 3:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("PIB foi o atributo escolhido\n");
        printf("PIB de %s: %.2f reais\n", cidade, pib);
        printf("PIB de %s: %.2f reais\n", cidade2, pib2);
        if (pib > pib2)
    {
        printf("Carta 1 venceu!\n");
    } else if (pib < pib2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 4:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("Pontos turísticos foi o atributo escolhido\n");
        printf("Quantidade de pontos turísticos de %s: %d\n", cidade, turismo);
        printf("Quantidade de pontos turísticos de %s: %d\n", cidade2, turismo2);
        if (turismo > turismo2)
    {
        printf("Carta 1 venceu!\n");
    } else if (turismo < turismo2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 5:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("Densidade Populacional foi o atributo escolhido\n");
        printf("Densidade Populacional de %s: %.2f\n", cidade, densidade);
        printf("Densidade Populacional de %s: %.2f\n", cidade2, densidade2);
        if (densidade < densidade2)
    {
        printf("Carta 1 venceu!\n");
    } else if (densidade > densidade2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 6:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("PIB per capita foi o atributo escolhido\n");
        printf("PIB per capita de %s: %.2f\n", cidade, pibpercapita);
        printf("PIB per capita de %s: %.2f\n", cidade2, pibpercapita2);
        if (pibpercapita > pibpercapita2)
    {
        printf("Carta 1 venceu!\n");
    } else if (pibpercapita < pibpercapita2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    case 7:
        printf("\n%s vs %s\n", cidade, cidade2);
        printf("Super Poder foi o atributo escolhido\n");
        printf("Super Poder de %s: %.2f\n", cidade, SuperPoder);
        printf("Super Poder de %s: %.2f\n", cidade2, SuperPoder2);
        if (SuperPoder > SuperPoder2)
    {
        printf("Carta 1 venceu!\n");
    } else if (SuperPoder < SuperPoder2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Deu empate.\n");
    }
        break;
    default:
        printf("Opção inválida.");
        break;
    }

    return 0;
}
