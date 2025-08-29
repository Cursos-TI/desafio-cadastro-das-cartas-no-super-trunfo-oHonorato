#include <stdio.h>

int main (){
    //VARIAVEIS CARTA NUMERO 1
    int populacao, turisticos;
    char carta[50];
    char estado[50];
    char cidade[50];
    float tamanho;
    float pib;
    float densidade;
    float percapita;

    //VARIAVEIS CARTA NUMERO 2
    int  populacao2, turisticos2;
    char carta2[50];
    char estado2[50];
    char cidade2[50];
    float tamanho2;
    float pib2;
    float densidade2;
    float percapita2;

    //COLETANDO OS DADOS DA CARTA NUMERO 1:

    printf("-----INSIRA OS DADOS DA PRIMEIRA CARTA-----");
    
    printf("\nInsira o estado: ");
    scanf("%s", estado);

    printf("Insira o codigo da carta: ");
    scanf("%s", carta);
    
    printf("Insira a cidade: ");
    getchar();
    scanf(" %[^\n]", cidade);

    printf("Insira a populacao: ");
    scanf("%d", &populacao);

    printf("Insira o tamanho da cidada: ");
    scanf("%f", &tamanho);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Isira os pontos turisticos: ");
    scanf("%d", &turisticos);

    densidade = populacao / tamanho;
    percapita = pib / populacao; 

    printf("Densidade Populacional; %.2f\n", densidade, "hab/km²");
    printf("PIB percapita: %.2f\n", percapita, "reais");

    //COLETANDO OS DADOS DA CARTA NUMERO 2:
    
    printf("-------INSIRA OS DADOS DA SEGUNDA CARTA-------");
    
    printf("\nInsira o estado: ");
    scanf("%s", estado2);

    printf("Insira o codigo da carta: ");
    scanf("%s", carta2);
    
    printf("Insira a cidade: ");
    getchar();
    scanf("%[^\n]", cidade2);

    printf("Insira a populacao: ");
    scanf("%d", &populacao2);

    printf("Insira o tamanho da cidada: ");
    scanf("%f", &tamanho2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Isira os pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidade2 = populacao2 / tamanho2;
    percapita2 = pib2 / populacao2; 

    printf("Densidade Populacional; %.2f\n", densidade2, "hab/km²");
    printf("PIB percapita: %.2f\n", percapita2, "reais");

    //EXIBINDO AS INFORMAÇÕES DA CARTA NUMERO 1

    printf("\n----------EXIBINDO OS DADOS----------");

    printf("\n----------CARTA 1----------");
    printf("\nEstado: %s", estado);
    printf("\nCodigo: %s", carta);
    printf("\nNome da cidade: %s", cidade);
    printf("\nPopulacao %d pessoas ", populacao);
    printf("\nArea: %.2f km²", tamanho);
    printf("\nPIB: %.2f bilhoes de reais", pib);
    printf("\nPontosturisticos: %d", turisticos);
    printf("\nDensidade Populacional %f hab/km² ", densidade);
    printf("\nPIB percapita %f reais", percapita);

    //EXIBINDO AS INFORMAÇÕES DA CARTA NUMERO 1

    printf("\n----------CARTA 2----------");
    printf("\nEstado: %s", estado2);
    printf("\nCodigo: %s", carta2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulacao %d pessoas ", populacao2);
    printf("\nArea: %.2f km²", tamanho2);
    printf("\nPIB: %.2f bilhoes de reais", pib2);
    printf("\nPontos turisticos: %d", turisticos2);
    printf("\nDensidade Populacional %.2f hab/km² ", densidade2);
    printf("\nPIB percapita %.2f reais", percapita2);

