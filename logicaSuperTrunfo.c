#include <stdio.h>

int main (){
    
    unsigned long int populacao, populacao2;
    int turismo, turismo2, opcao, opcao2, resultado, resultado2;
    char estado[50], estado2[50], codigoCarta[50], codigoCarta2[50], cidade[50], cidade2[50];
    float area, area2, pib, pib2, pibpercapita, densidade, pibpercapita2, densidade2, soma, soma2;
    char *atributo;
    char a[] = "População";
    char b[] = "Área";
    char c[] = "PIB";
    char d[] = "Pontos turísticos";
    char e[] = "Densidade populacional";
    char f[] = "PIB per Capita";

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

    //MENU INTERATIVO

    printf("\nQual atributo você escolherá? (Você é a carta 1)\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per capita\n");
    scanf("%d", &opcao);
    
    //SWITCH CASE

    switch (opcao)
    {
    case 1:
        resultado = populacao > populacao2 ? 1 : 0;
        soma = populacao;
        soma2 = populacao2;
        atributo = a;
        break;
    case 2:
        resultado = area > area2 ? 1 : 0;
        soma = area;
        soma2 = area2;
        atributo = b;
        break;
    case 3:
        resultado = pib > pib2 ? 1 : 0;
        soma = pib;
        soma2 = pib2;
        atributo = c;
        break;
    case 4:
        resultado = turismo > turismo2 ? 1 : 0;
        soma = turismo;
        soma2 = turismo2;
        atributo = d;
        break;
    case 5:
        resultado = densidade < densidade2 ? 1 : 0;
        soma = densidade;
        soma2 = densidade2;
        atributo = e;
        break;
    case 6:
        resultado = pibpercapita > pibpercapita2 ? 1 : 0;
        soma = pibpercapita;
        soma2 = pibpercapita2;
        atributo = f;
        break;
    default:
        printf("Opção inválida.");
        break;
    }

    printf("\nAgora escolha um atributo diferente\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turísticos\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB per capita\n");
    scanf("%d", &opcao2);

    if (opcao == opcao2)
    {
        printf("Você escolheu a mesma opção.");
    } else {
        switch (opcao2)
        {
        case 1:
            resultado2 = populacao > populacao2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, a);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %lu\n", a, populacao);
            printf("%s da Carta 2: %lu\n", a, populacao2);
            soma += populacao;
            soma2 += populacao2;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        case 2:
            resultado2 = area > area2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, b);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %.2f\n", b, area);
            printf("%s da Carta 2: %.2f\n", b, area2);
            soma += area;
            soma2 += area2;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        case 3:
            resultado2 = pib > pib2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, c);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %.2f\n", c, pib);
            printf("%s da Carta 2: %.2f\n", c, pib2);
            soma += pib;
            soma2 += pib;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        case 4:
            resultado2 = turismo > turismo2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, d);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %d\n", d, turismo);
            printf("%s da Carta 2: %d\n", d, turismo2);
            soma += turismo;
            soma2 += turismo2;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        case 5:
            resultado2 = densidade < densidade2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, e);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %.2f\n", e, densidade);
            printf("%s da Carta 2: %.2f\n", e, densidade2);
            soma += densidade;
            soma2 += densidade2;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        case 6:
            resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
            printf("\n%s vs %s\n", cidade, cidade2);
            printf("Primeiro atributo: %s | Segundo atributo: %s\n", atributo, f);
            printf("%s da Carta 1: %.2f\n", atributo, soma);
            printf("%s da Carta 2: %.2f\n", atributo, soma2);
            printf("%s da Carta 1: %.2f\n", f, pibpercapita);
            printf("%s da Carta 2: %.2f\n", f, pibpercapita2);
            soma += pibpercapita;
            soma2 += pibpercapita2;
            printf("Soma do primeiro atributo: %.2f\n", soma);
            printf("Soma do segundo atributo: %.2f\n", soma2);
            break;
        default:
            printf("Opção inválida.");
            break;
        }
    }
    
    //RESULTADO FINAL
    if (resultado && resultado2)
    {
        printf("\nVocê venceu!");
    } else if (resultado != resultado2)
    {
        printf("\nDeu empate.");
    } else 
    {
        printf("\nVocê perdeu.");
    }

    
    return 0;
}
