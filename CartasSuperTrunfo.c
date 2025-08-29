#include <stdio.h>

int main (){
    char estado1[1]; //Variável do Estado da Carta 1
    char estado2[1]; //Variável do Estado da Carta 2
    char codigo1[3]; //Variável do Código da Carta 1
    char codigo2[3]; //Variável do Código da Carta 2
    char cidade1[20]; //Variável da Cidade da Carta 1
    char cidade2[20]; //Variável da Cidade da Carta 1
    int populacao1, populacao2; //Variáveis das Populações das Cartas 1 e 2
    float area1, area2; //Variáveis das Áreas das Cartas 1 e 2
    float pib1, pib2; //Variáveis dos PIBs das Cartas 1 e 2
    int ponto1, ponto2; //Variáveis dos Pontos Turísticos das Cartas 1 e 2
    float densidade1, densidade2; //Variáveis da Densidade Populacional das Cartas 1 e 2
    float pibpercapita1, pibpercapita2; //Variáveis do PIB per capita das Cartas 1 e 2
    float superpoder1, superpoder2; //Variáveis do Super Poder das Cartas 1 e 2
   
    //Início das Variáveis da Carta 1

    printf("Digite abaixo as informações da Carta 1 \n\n"); //Solicita informações da Carta 1 ao usuário
    
    printf("Digite uma letra de 'A' a 'H' representando o estado da primeira Carta: \n"); //Solicita informações do estado e grava na variável na sequência
    scanf("%s", &estado1);

    printf("Digite o código da primeira Carta usando a letra do estado seguida de um número de 01 a 04: \n"); //Solicita informações do código e grava na variável na sequência
    scanf("%s", &codigo1);

    printf("Digite a cidade da primeira Carta: \n"); //Solicita informações da cidade e grava na variável na sequência
    scanf("%s", &cidade1);

    printf("Digite a população da primeira Carta: \n"); //Solicita informações da população e grava na variável na sequência
    scanf("%d", &populacao1);

    printf("Digite a área (Km2) da primeira Carta: \n"); //Solicita informações da área e grava na variável na sequência
    scanf("%f", &area1);

    printf("Digite o PIB da primeira Carta: \n"); //Solicita informações do PIB e grava na variável na sequência
    scanf("%f", &pib1);

    printf("Digite a QTD de pontos turísticos da primeira Carta: \n"); //Solicita informações da QTD de pontos turísticos e grava na variável na sequência
    scanf("%d", &ponto1);

    densidade1 = populacao1/area1; //Densidade população da Carta 1 = População / Área
    pibpercapita1 = pib1/populacao1; //PIB per capita da Carta 1 = PIB / População
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)ponto1 + pibpercapita1 + (1/densidade1); //Cálculo do Super Poder da Carta 1

    //Início das Variáveis da Carta 2
    
    printf("Digite abaixo as informações da Carta 2 \n\n"); //Solicita informações da Carta 1 ao usuário
    
    printf("Digite uma letra de 'A' a 'H' representando o estado da segunda Carta: \n"); //Solicita informações do estado e grava na variável na sequência
    scanf("%s", &estado2);

    printf("Digite o código da segunda Carta usando a letra do estado seguida de um número de 01 a 04: \n"); //Solicita informações do código e grava na variável na sequência
    scanf("%s", &codigo2);

    printf("Digite a cidade da segunda Carta: \n"); //Solicita informações da cidade e grava na variável na sequência
    scanf("%s", &cidade2);

    printf("Digite a população da segunda Carta: \n"); //Solicita informações da população e grava na variável na sequência
    scanf("%d", &populacao2);

    printf("Digite a área (Km2) da segunda Carta: \n"); //Solicita informações da área e grava na variável na sequência
    scanf("%f", &area2);

    printf("Digite o PIB da primeira segunda: \n"); //Solicita informações do PIB e grava na variável na sequência
    scanf("%f", &pib2);

    printf("Digite a QTD de pontos turísticos da segunda Carta: \n"); //Solicita informações da QTD de pontos turísticos e grava na variável na sequência
    scanf("%d", &ponto2);

    densidade2 = populacao2/area2; //Densidade população da Carta 2 = População / Área
    pibpercapita2 = pib2/populacao2; //PIB per capita da Carta 2 = PIB / População
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)ponto2 + pibpercapita2 + (1/densidade2); //Cálculo do Super Poder da Carta 2

    //Impressões dos Dados das Cartas 1 e 2

    printf("INFORMATIVOS DA CARTA 1 \n");
    printf("O estado da Carta 1 é: %s \n", estado1);
    printf("O código da Carta 1 é: %s \n", codigo1);
    printf("A cidade da Carta 1 é: %s \n", cidade1);
    printf("A população da Carta 1 é: %d \n", populacao1);
    printf("A área da Carta 1 é: %.2f \n", area1);
    printf("O PIB da Carta 1 é: %.2f \n", pib1);
    printf("A QTD de pontos turísticos da Carta 1 é: %d \n", ponto1);
    printf("A densidade populacional da Carta 1 é: %.2f \n", densidade1);
    printf("O PIB per capita da Carta 1 é: %.2f \n\n", pibpercapita1);
    
    printf("INFORMATIVOS DA CARTA 2 \n");
    printf("O estado da Carta 2 é: %s \n", estado2);
    printf("O código da Carta 2 é: %s \n", codigo2);
    printf("A cidade da Carta 2 é: %s \n", cidade2);
    printf("A população da Carta 2 é: %d \n", populacao2);
    printf("A área da Carta 2 é: %.2f \n", area2);
    printf("O PIB da Carta 2 é: %.2f \n", pib2);
    printf("A QTD de pontos turísticos da Carta 2 é: %d \n", ponto2);
    printf("A densidade populacional da Carta 2 é: %.2f \n", densidade2);
    printf("O PIB per capita da Carta 2 é: %.2f \n\n", pibpercapita2);

    //Comparativo das Cartas 1 e 2
    printf("***SE O RESULTADO FOR 1 VENCE A CARTA 1, SE FOR 0 VENCE A CARTA 2***\n");
    printf("No quesito POPULAÇÃO: %d\n", populacao1 > populacao2);
    printf("No quesito ÁREA: %d\n", area1 > area2);
    printf("No quesito PIB: %d\n", pib1 > pib2);
    printf("No quesito PONTOS TURÍSTICOS: %d\n", ponto1 > ponto2);
    printf("No quesito DENSIDADE POPULACIONAL: %d\n", densidade1 < densidade2);
    printf("No quesito PIB PER CAPITA: %d\n", pibpercapita1 > pibpercapita2);
    printf("No quesito SUPER PODER: %d\n", superpoder1 > superpoder2);



    return 0;

}