#include <stdio.h>

int main(){

    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Entrada de dados da Carta 1
    printf("\nCadastro da Carta 1:\n");

    printf("Digite o Estado de (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex:A01):\n");  
    scanf(" %s", &codigo1);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %s", &nome_da_cidade1);

    printf("Digite a Populacao da Cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a Área da Cidade:\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite o Número de Pontos Turísticos:\n ");
    scanf(" %d", &pontos_turisticos1);

// Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex:B02): \n");
    scanf(" %s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &nome_da_cidade2);

    printf("Digite a População da Cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf(" %d", &pontos_turisticos2);


//Calcular a Densidade Populacional 1:
float densidade_populacional1 = (float) populacao1/area1;

//Calcular a Densidade Populacional 2:
float densidade_populacional2 = (float) populacao2/area2;

//Calcular o PIB per Capita 1:
float PIB_per_Capita1 = (float) pib1/populacao1;

//Calcular o PIB per Capita 2:
float PIB_per_Capita2 = (float) pib2/populacao2;


    //Exibindo a Carta 1
    printf("\n \nCarta 1: \n \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n ", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1); 

    //Exibindo a Carta 2
    printf("\nCarta 2:\n \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
}