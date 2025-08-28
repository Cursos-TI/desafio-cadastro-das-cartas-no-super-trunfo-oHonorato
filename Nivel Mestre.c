#include <stdio.h>

int main(){

    //VARIAVEIS DAS CARTAS UM E DOIS;
    
    char estado[50], estado2[50];
    char carta[50], carta2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int turisticos, turisticos2;
    double densidade, densidade2;
    double percapita, percapita2;
    float poder1, poder2;
    long double inverso, inverso2;

    //COLETANDO DADOS DA CARTA 1

    printf("-----INSIRA OS DADOS DA PRIMEIRA CARTA-----");
    
    printf("\nInsira o estao: ");
    scanf("%s", estado);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta);
    
    getchar();
    
    printf("Isira o nome da cidade: ");
    scanf("%[^\n]", cidade);
    
    printf("Insira a populacao: ");
    scanf("%lu", &populacao);

    printf("Insira a area: ");
    scanf("%lf", &area);

    printf("insira o PIB: ");
    scanf("%lf", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &turisticos);

    densidade =  populacao / area;
    percapita =  pib / populacao;
    inverso =  1.0 / densidade;
    poder1 = (float)(populacao + area + pib + turisticos + percapita + inverso);

    //COLETANDO DADOS DA CARTA 2

    printf("-----INSIRA OS DADOS DA SEGUNDA CARTA-----");
    
    printf("\nInsira o estao: ");
    scanf("%s", estado2);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta2);
    
    getchar();
    
    printf("Isira o nome da cidade: ");
    scanf("%[^\n]", cidade2);
    
    printf("Insira a populacao: ");
    scanf("%lu", &populacao2);

    printf("Insira a area: ");
    scanf("%lf", &area2);

    printf("insira o PIB: ");
    scanf("%lf", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidade2 =  populacao2 / area2;
    percapita2 =  pib2 / populacao2;
    inverso2 =  1.0 / densidade2;
    poder2 = (float)(populacao2 + area2 + pib2 + turisticos2 + percapita2 + inverso2);

    //MOSTRANDO OS DADOS DAS CARTAS:
    
    printf("\n----------DADOS DA PRIMEIRA CARTA----------\n");
    printf("ESTADO: %s\n", estado);
    printf("CARTA: %s\n", carta);
    printf("CIDADE: %s\n", cidade);
    printf("POPULACAO: %lu\n", populacao, "hab");
    printf("AREA: %.2lf\n", area, "km²");
    printf("PIB: %.2lf\n", pib, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade , "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita, "R$");
    printf("SUPER PODER: %.2f\n", poder1);

    printf("\n----------DADOS DA SEGUNDA CARTA----------\n");
    printf("ESTADO: %s\n", estado2);
    printf("CARTA: %s\n", carta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULACAO: %lu\n", populacao2, "hab");
    printf("AREA: %.2lf\n", area2, "km²");
    printf("PIB: %.2lf\n", pib2, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade2, "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita2, "R$");
    printf("SUPER PODER: %.2f\n", poder2);

    //COMPARANDO AS CARTAS UM E DOIS:

    printf("\n----------COMPARAÇÃO DAS DUAS CARTAS----------\n");

    int ponto1 = 0, ponto2 = 2;

    ponto1 += (populacao > populacao2);
    ponto2 += (populacao2 > populacao);

    ponto1 += (area > area2);
    ponto2 += (area2 > area);   

    ponto1 += (pib > pib2);
    ponto2 += (pib2 > pib); 

    ponto1 += (turisticos > turisticos2);
    ponto2 += (turisticos2 > turisticos);   

    ponto1 += (densidade > densidade2);
    ponto2 += (densidade2 > densidade);     

    ponto1 += (percapita > percapita2);    
    ponto2 += (percapita2 > percapita);

    ponto1 += (poder1 > poder2);
    ponto2 += (poder2 > poder1);

    printf("População: Carta %d venceu (%d)\n", (populacao > populacao2) + 1, (populacao > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area > area2) + 1, (area > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) + 1, (pib > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (turisticos > turisticos2) + 1, (turisticos > turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade > densidade2) + 1, (densidade > densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (percapita > percapita2) + 1, (percapita > percapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (poder1 > poder2) + 1, (poder1 > poder2));

    
    return 0;



}
