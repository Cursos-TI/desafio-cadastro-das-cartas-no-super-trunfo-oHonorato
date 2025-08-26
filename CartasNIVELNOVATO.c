#include <stdio.h>

int main() {

//VARIÁVEIS------------------------------------------------------

char estado[50];
char carta[50];
char cidade[50];
float populacao;
float tamanho;
float pib;
int turisticos;
char estado2[50];
char carta2[50];
char cidade2[50];
float populacao2;
float tamanho2;
float pib2;
int turisticos2;

//CARTA NÚMERO 1-------------------------------------------------

// COLETANDO AS INFORMAÇÕES
printf("-----------INSIRA AS INFROMACOES DA CARTA NUMERO 1----------");
printf("\nInsira o estado: ");
scanf("%s", estado);
printf("Insira o codigo da carta: ");
scanf("%s", carta);
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade);
printf("Digite a populcao: ");
scanf("%f", &populacao);
printf("Digite o tamanho da cidade: ");
scanf("%f", &tamanho);
printf("informe o PIB: ");
scanf("%f", &pib);
printf("Iforme a quantidade pontos turisticos: ");
scanf("%d", &turisticos);

//CARTA NÚMERO 2-------------------------------------------------

// COLETANDO AS INFORMAÇÕES
printf("-----------INSIRA AS INFROMACOES DA CARTA NUMERO 2----------");
printf("\nInsira o estado: ");
scanf("%s", estado2);
printf("Insira o codigo da carta: ");
scanf("%s", carta2);
printf("Digite o nome da cidade: ");
scanf(" %[^\n]", cidade2);
printf("Digite a populcao: ");
scanf("%f", &populacao2);
printf("Digite o tamanho da cidade: ");
scanf("%f", &tamanho2);
printf("informe o PIB: ");
scanf("%f", &pib2);
printf("Iforme a quantidade pontos turisticos: ");
scanf("%d", &turisticos2);

//EXIBINDO AS INFORMAÇOES----------------------------------------

printf("\n-----------CARTA 1----------");
printf("\n Estado: %s", estado);
printf("\n Codigo: %s", carta);
printf("\n Cidade: %s", cidade);
printf("\n Populacao: %.2f", populacao);
printf("\n Tamanho: %.2f Km²", tamanho);
printf("\n PIB: %2.f bilhoes de reais", pib);
printf("\n Numero de pontos turisticos: %d", turisticos);

printf("\n-----------CARTA 2----------");
printf("\n Estado: %s", estado2);
printf("\n Codigo: %s", carta2);
printf("\n Cidade: %s", cidade2);
printf("\n Populacao: %.2f", populacao2);
printf("\n Tamanho: %.2f Km²", tamanho2);
printf("\n PIB: %2.f bilhoes de reais", pib2);
printf("\n Numero de pontos turisticos: %d", turisticos2);



return 0;


}
