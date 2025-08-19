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

    // Calcula o super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 
    + pibpercapita1;

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

    // Calcula o super poder
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 
    + pibpercapita2;

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

    printf("\n"); // Pula uma linha

    int opcao1;
    int resultado1;
    printf("Escolha um dos atributos a baixo para comparaçao\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha a comparação: ");
    scanf("%d", &opcao1);

    printf("\n"); // Pula uma linha

    switch (opcao1)
    {
    case 1:  
    resultado1 = populacao1 > populacao2 ? 1 : 0;  
    break;

    case 2:
    resultado1 = area1 > area2 ? 1 : 0;
    break;

    case 3:
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;

    case 4:
    resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
    break;

    case 5:
    resultado1 = densidade1 < densidade2 ? 1 : 0;
    break;

    default:
        printf("Opção inválida!\n");
    break;
    }

    int opcao2;
    int resultado2;
    printf("Escolha um dos atributos a baixo para comparaçao\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);


    if (opcao1 == opcao2)
    {
        printf("Voçê escolheu o mesmo atributo que o anterior");
    }else{
        switch (opcao2)
        {
        case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;  
        break;

        case 2:        
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:        
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:        
        resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;

        case 5:
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

        default:
            printf("Opção inválida!\n");
        break;
        }
    }


    printf("\n");
    //inicio da exebiçao de resultado Carta 1 para o 1° atributo.
    printf("Exibição de comparação do 1° Atributo escolhido carta 1\n");
    printf("Carta 1 - Cidade: %s - ", nomeCidade1);
    switch(opcao1){
    case 1: printf("População: %lu\n", populacao1); break;
    case 2: printf("Área: %.2f\n", area1); break;
    case 3: printf("PIB: %.2f\n", pib1); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosTuristicos1); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidade1); break;
    }

    //inicio da exebiçao de resultado Carta 2 para o 1° atributo.
    printf("Exibição de comparação do 1° Atributo escolhido carta 2\n");
    printf("Carta 2 - Cidade: %s - ", nomeCidade2);
    switch(opcao1){
    case 1: printf("População: %lu\n", populacao2); break;
    case 2: printf("Área: %.2f\n", area2); break;
    case 3: printf("PIB: %.2f\n", pib2); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosTuristicos2); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidade2); break;
    }
    if (resultado1 == 1)
    {
        printf("Carta 1 venceu.\n");
    }else{
        printf("Carta 2 venceu.\n");
    }
    
    printf("\n");

    //inicio da exebiçao de resultado Carta 2 para o 2° atributo.
    printf("Exibição de comparação do 2° Atributo escolhido para carta 1\n");
    printf("Carta 1 - Cidade: %s - ", nomeCidade1);
    switch(opcao2){
    case 1: printf("População: %lu\n", populacao1); break;
    case 2: printf("Área: %.2f\n", area1); break;
    case 3: printf("PIB: %.2f\n", pib1); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosTuristicos1); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidade1); break;
    }

    //inicio da exebiçao de resultado Carta 2 para o 2° atributo.
    printf("Exibição de comparação do 2° Atributo escolhido para carta 1\n");
    printf("Carta 2 - Cidade: %s - ", nomeCidade2);
    switch(opcao2){
    case 1: printf("População: %lu\n", populacao2); break;
    case 2: printf("Área: %.2f\n", area2); break;
    case 3: printf("PIB: %.2f\n", pib2); break;
    case 4: printf("Pontos Turísticos: %d\n", pontosTuristicos2); break;
    case 5: printf("Densidade Demográfica: %.2f\n", densidade2); break;
    }

    if (resultado2 == 1)
    {
        printf("Carta 1 venceu.\n");
    }else{
        printf("Carta 2 venceu.\n");
    }
    
    //Soma para o atributo 1 da carta 1
    float  soma1 = 0;
    switch (opcao1)
    {
    case 1: soma1 += populacao1; break;
    case 2: soma1 += area1; break;
    case 3: soma1 += pib1; break;
    case 4: soma1 += pontosTuristicos1; break;
    case 5: soma1 += densidade1; break;
    }

    //Soma para o atributo 2 da carta 1
    switch (opcao2)
    {
    case 1: soma1 += populacao1; break;
    case 2: soma1 += area1; break;
    case 3: soma1 += pib1; break;
    case 4: soma1 += pontosTuristicos1; break;
    case 5: soma1 += densidade1; break;
    }

    //Soma para o atributo 1 da carta 2
    float soma2 = 0;
    switch (opcao1)
    {
    case 1: soma2 += populacao2; break;
    case 2: soma2 += area2; break; 
    case 3: soma2 += pib2; break;
    case 4: soma2 += pontosTuristicos2; break;
    case 5: soma2 += densidade2; break;
    }

    //Soma para o atributo 2 da carta 2
    switch (opcao2)
    {
    case 1: soma2 += populacao2; break;
    case 2: soma2 += area2; break;
    case 3: soma2 += pib2; break;
    case 4: soma2 += pontosTuristicos2; break;
    case 5: soma2 += densidade2; break;
    }

    printf("\n");
    printf("\n=== VENCEDOR ===\n");
    printf("Soma 1: %.2f\n", soma1);
    printf("Soma 2: %.2f\n", soma2);
    if(soma1 > soma2){
        printf("Carta 1 venceu!\n");
    }else if(soma2 > soma1){
        printf("Carta 2!\n");
    }else{
        printf("Empatou!\n");
    }
    
    return 0;
}
