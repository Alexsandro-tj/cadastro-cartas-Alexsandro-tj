#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeDoJogador[50];
    char boasVindas[50] = "Seja Bem Vindo! Esse é o jogo Super TRUNFO!\n\n";
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;                    // Estados de cada carta representado em uma letra
    char codCarta[5], codCarta2[5];          // Código da carta representado na letra do estao mais o numero da cidade
    char nomeCidade[20], nomeCidade2[20];    // Nome da cidade da carta
    int populacao, populacao2;               // População da cidade
    float area, area2, pib, pib2;            // Área da cidade em metros quadrados KM² - Produto interno bruto da cidade
    int pontosTuristicos, pontosTuristicos2; // Número total de pontos turísticos

    // Área para entrada de dados

    printf("Olá! - Primeiramente precisamos conhece-lo(a)\n");
    printf("Porfavor, digite seu nome: \n");
    scanf("%s", nomeDoJogador);
    printf("Oi %s! %s", nomeDoJogador, boasVindas);
    // Cadastro primeira carta
    printf("Vamos começar cadastrando a sua primeira carta \n\n");

    printf("Digite o Estado da sua carta, reprensentado por uma letra de, 'A' até 'H':\n");
    scanf(" %c", &estado);

    printf("Agora, digite o código da sua carta, com a primeira letra do seu estado, EX.: A01 ou B01: \n");
    scanf("%s",codCarta);

    printf("Digite o nome da cidade com uma palavra: \n");
    scanf("%s",nomeCidade);

    printf("Certo, agora digite a população total da sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área total da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos que a sua cidade tem: \n");
    scanf("%d", &pontosTuristicos);

    // Cadastro segunda carta

    printf("Vamos cadastrar a sua segunda carta\n\n");
    printf("Digite o Estado da sua carta, reprensentado por uma letreta de, 'A' até 'H'\n");
    scanf(" %c", &estado2);

    printf("Agora, digite o código da sua carta, com a primeira letra do seu estado, EX.: A01 ou B01 \n");
    scanf("%s",codCarta2);

    printf("Digite o nome da cidade com uma palavra: \n");
    scanf("%s",nomeCidade2);

    printf("Certo, agora digite a população total da sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área total da sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos que a sua cidade tem: \n");
    scanf("%d", &pontosTuristicos2);

    // Área de Cálculo de variáveis (Foi alocado está área de calculo, pois no local inicial ocorria muitos erros de calculo nas variaveis finais)

    float densidadePopulacional = populacao / area;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapita = pib / populacao;
    float pibPercapita2 = pib2 / populacao2;

    // Área para exibição dos dados da cidade

    // Primeira Carta

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("PIB per Capita: %.2f \n \n", pibPercapita);

    // Segunda Carta

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População; %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPercapita2);
    printf("CADASTRO CONCLUIDO COM SUCESSO!");

    return 0;
}
