#include <stdio.h>

int main(){
    // variaveis para carta 01
    char estado1;
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
    char estado2;
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

    printf("Digite Seu Estado(letra de A a H): ");
    scanf(" %c", &estado1);

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

    printf("Digite Seu Estado(letra de A a H): ");
    scanf(" %c", &estado2);

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
    printf("Estado 1: %c\n", estado1);
    printf("Codigo 1: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turistico: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %f\n", superpoder1);

    printf("\n"); // Pula uma linha

    // Exibição das informações da Carta 2
    printf("Carta 2:\n");
    printf("Estado 2: %c\n", estado2);
    printf("Codigo 2: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turistico: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %f\n", superpoder2);

    //exibiçao de comparação usando os metodos ensinados ate agora!

    printf("******* COMPARAÇÃO DAS CARTAS *******\n");
  
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}

