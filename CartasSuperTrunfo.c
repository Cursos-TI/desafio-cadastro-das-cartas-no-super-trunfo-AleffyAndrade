#include <stdio.h>
#include <string.h>

int main() {
    char estado1, estado2;
    char codigo1[100], codigo2[100];
    char cidade1[100], cidade2[100];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    int escolhaJogador;
    float densidade1, densidade2;
    float pibp1, pibp2;
    double super1, super2;  
    int resPopulacao, resArea, resPIB, resPontosTuristicos, resDensidadePop, resPIBPerCapita, resSuperPoder;

    printf("Carta 01! Complete o que se pede :-)\n");
    printf("Digite o estado (apenas a letra inicial):\n");
    scanf(" %c", &estado1);

    printf("Digite o código do estado (letra inicial e o número de 0 a 4):\n");
    scanf("%s", codigo1);

    printf("Digite o nome completo da cidade:\n");
    scanf(" %[^\n]", cidade1); // aceita espaços

    printf("Digite a população (em milhões):\n");
    scanf("%f", &populacao1);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões de reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto1);

    printf("\nCarta 02! Complete o que se pede :-)\n");
    printf("Digite o estado (apenas a letra inicial):\n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (letra inicial e o número de 0 a 4):\n");
    scanf("%s", codigo2);

    printf("Digite o nome completo da cidade:\n");
    scanf(" %[^\n]", cidade2); // aceita espaços

    printf("Digite a população (em milhões):\n");
    scanf("%f", &populacao2);

    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibp1 = pib1 / populacao1;
    pibp2 = pib2 / populacao2;

    super1 = populacao1 + ponto1 + pib1 + pibp1 + area1 + 1.0 / densidade1;
    super2 = populacao2 + ponto2 + pib2 + pibp2 + area2 + 1.0 / densidade2;

    // Exibição das cartas
    printf("\nA carta 01 é:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", ponto1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade1);
    printf("PIB per capita: %.2f milhões de reais\n", pibp1);

    printf("\nA carta 02 é:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", ponto2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade2);
    printf("PIB per capita: %.2f milhões de reais\n", pibp2);

    // Comparações
    resPopulacao = (populacao1 > populacao2);
    resArea = (area1 > area2);
    resPIB = (pib1 > pib2);
    resPontosTuristicos = (ponto1 > ponto2);
    resDensidadePop = (densidade1 > densidade2);
    resPIBPerCapita = (pibp1 > pibp2);
    resSuperPoder = (super1 > super2);

    printf("\n*** Comparando as cartas ***\n");
    printf("População: Carta %d venceu (%d)\n", resPopulacao ? 1 : 2, resPopulacao);
    printf("Área: Carta %d venceu (%d)\n", resArea ? 1 : 2, resArea);
    printf("PIB: Carta %d venceu (%d)\n", resPIB ? 1 : 2, resPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resPontosTuristicos ? 1 : 2, resPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resDensidadePop ? 1 : 2, resDensidadePop);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resPIBPerCapita ? 1 : 2, resPIBPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", resSuperPoder ? 1 : 2, resSuperPoder);

    // Menu interativo
    printf("\n### Jogo de comparar e com menu interativo ###\n");
    printf("Escolha uma opção (digite o número indicado):\n");
    printf("1. Comparar população\n");
    printf("2. Comparar área\n");
    printf("3. Comparar PIB\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador) {
        case 1:
            printf("Vamos comparar as populações!\n");
            if (populacao1 > populacao2)
                printf("Carta A ganhou na população!\n");
            else if (populacao2 > populacao1)
                printf("Carta B ganhou na população!\n");
            else
                printf("Empate na população!\n");
            break;
        case 2:
            printf("Vamos comparar as áreas!\n");
            if (area1 > area2)
                printf("Carta A ganhou na área!\n");
            else if (area2 > area1)
                printf("Carta B ganhou na área!\n");
            else
                printf("Empate na área!\n");
            break;
        case 3:
            printf("Vamos comparar o PIB!\n");
            if (pib1 > pib2)
                printf("Carta A ganhou no PIB!\n");
            else if (pib2 > pib1)
                printf("Carta B ganhou no PIB!\n");
            else
                printf("Empate no PIB!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

