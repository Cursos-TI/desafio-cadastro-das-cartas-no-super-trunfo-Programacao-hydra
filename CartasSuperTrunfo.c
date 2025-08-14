#include <stdio.h>

int main(){
    // variaveis para carta 01
    char estado1[3];
    char codigo1[4]; 
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpercapita1;
    float inversodadensidade1;
    float superpoder1;

    // variaveis para carta 02
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpercapita2;
    float inversodadensidade2;
    float superpoder2;

    // Entrada de dados carta 01
    printf("=== Cadastro da carta 01 ===\n");

    printf("Digite á sigla do seu Estado(UF): ");
    scanf(" %2s", estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    getchar();

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calcula a Densidade populacional
    densidade1 = populacao1 / area1;

    // Calcula o pib percapita
    pibpercapita1 = pib1 / (float)populacao1;

    // calcula o inverso da densidade
    inversodadensidade1 = 1.0 / densidade1;

    // Calcula o super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 
    + pibpercapita1 + inversodadensidade1;

    printf("\n");// Pula uma linha

    // Entrada de dados carta 02
    printf("=== Cadastro da carta 02 ===\n");

    printf("Digite á sigla do seu Estado(UF): ");
    scanf(" %2s", estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    getchar();

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a Densidade populacional
    densidade2 = populacao2 / area2;

    // Calcula o pib percapita
    pibpercapita2 = pib2 / (float)populacao2;

    // calcula o inverso da densidade
    inversodadensidade2 = 1.0 / densidade2;

    // Calcula o super poder
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 
    + pibpercapita2 + inversodadensidade2;

    printf("\n");// Pula uma linha

    // Exibição das informações da Carta 1
    printf("Carta 1:\n");
    printf("Estado 1: %s\n", estado1);
    printf("Codigo 1: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turistico: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n"); // Pula uma linha

    // Exibição das informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado 2: %s\n", estado2);
    printf("Codigo 2: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turistico: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //exibiçao de comparação 

    printf("******* COMPARAÇÃO DAS CARTAS *******\n");
    printf("\n");// Pula uma linha

    printf("-=-=-=COMPARAÇÃO DA POPULAÇÃO=-=-=-\n");
   
    if (populacao1 > populacao2){
        printf("Carta 1: %s(%s) - População: %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2: %s(%s) - População: %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (populacao1 < populacao2) {
        printf("Carta 1: %s(%s) - População: %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2: %s(%s) - População: %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - População: %lu\n", nomeCidade1, estado1, populacao1);
        printf("Carta 2: %s(%s) - População: %lu\n", nomeCidade2, estado2, populacao2);
        printf("Resultado: Empate!\n");
    }
    printf("\n");// Pula uma linha

    printf("-=-=-=COMPARAÇÃO DA AREA(em km²)=-=-=-\n");
    if (area1 > area2){
        printf("Carta 1: %s(%s) - Area em km²: %.2f\n", nomeCidade1, estado1, area1);
        printf("Carta 2: %s(%s) - Area em km²: %.2f\n", nomeCidade2, estado2, area2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (area1 < area2){
        printf("Carta 1: %s(%s) - Area em km²: %.2f\n", nomeCidade1, estado1, area1);
        printf("Carta 2: %s(%s) - Area em km²: %.2f\n", nomeCidade2, estado2, area2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - Area em km²: %.2f\n", nomeCidade1, estado1, area1);
        printf("Carta 2: %s(%s) - Area em km²: %.2f\n", nomeCidade2, estado2, area2);
        printf("Resultado: Empate!\n");
    }
    printf("\n");// Pula uma linha

    printf("-=-=-=COMPARAÇÃO DO PIB=-=-=-\n");
    if (pib1 > pib2){
        printf("Carta 1: %s(%s) - PIB: %.2f\n", nomeCidade1, estado1, pib1);
        printf("Carta 2: %s(%s) - PIB: %.2f\n", nomeCidade2, estado2, pib2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (pib1 < pib2){
        printf("Carta 1: %s(%s) - PIB: %.2f\n", nomeCidade1, estado1, pib1);
        printf("Carta 2: %s(%s) - PIB: %.2f\n", nomeCidade2, estado2, pib2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - PIB: %.2f\n", nomeCidade1, estado1, pib1);
        printf("Carta 2: %s(%s) - PIB: %.2f\n", nomeCidade2, estado2, pib2);
        printf("Resultado: Empate!\n");
    }
    printf("\n");// Pula uma linha

    printf("-=-=-=COMPARAÇÃO DA DENSIDADE=-=-=-\n");
    if (densidade1 > densidade2){
        printf("Carta 1: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade1, estado1, densidade1);
        printf("Carta 2: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade2, estado2, densidade2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (densidade1 < densidade2){
        printf("Carta 1: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade1, estado1, densidade1);
        printf("Carta 2: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade2, estado2, densidade2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade1, estado1, densidade1);
        printf("Carta 2: %s(%s) - DENSIDADE POPULACIONAL: %.2f\n", nomeCidade2, estado2, densidade2);
        printf("Resultado: Empate!\n");
    }
    printf("\n");// Pula uma linha
    
    printf("-=-=-=COMPARAÇÃO DO PIB PER CAPITA=-=-=-\n");
    if (pibpercapita1 > pibpercapita2){
        printf("Carta 1: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade1, estado1, pibpercapita1);
        printf("Carta 2: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade2, estado2, pibpercapita2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (pibpercapita1 < pibpercapita2){
        printf("Carta 1: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade1, estado1, pibpercapita1);
        printf("Carta 2: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade2, estado2, pibpercapita2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade1, estado1, pibpercapita1);
        printf("Carta 2: %s(%s) - PIB PER CAPITA: %.2f\n", nomeCidade2, estado2, pibpercapita2);
        printf("Resultado: Empate!\n");
    }
    printf("\n");// Pula uma linha

    printf("-=-=-=COMPARAÇÃO DO SUPER PODER=-=-=-\n");
    if (superpoder1 > superpoder2){
        printf("Carta 1: %s(%s) - SUPER PODER: %.2f\n", nomeCidade1, estado1, superpoder1);
        printf("Carta 2: %s(%s) - SUPER PODER: %.2f\n", nomeCidade2, estado2, superpoder2);
        printf("Resultado: Carta 1 (%s) Venceu\n", nomeCidade1);
    } else if (superpoder1 < superpoder2){
        printf("Carta 1: %s(%s) - SUPER PODER: %.2f\n", nomeCidade1, estado1, superpoder1);
        printf("Carta 2: %s(%s) - SUPER PODER: %.2f\n", nomeCidade2, estado2, superpoder2);
        printf("Resultado: Carta 2 (%s) Venceu\n", nomeCidade2);
    } else {
        printf("Carta 1: %s(%s) - SUPER PODER: %.2f\n", nomeCidade1, estado1, superpoder1);
        printf("Carta 2: %s(%s) - SUPER PODER: %.2f\n", nomeCidade2, estado2, superpoder2);
        printf("Resultado: Empate!\n");
    }

    return 0;

