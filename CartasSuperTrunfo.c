#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[100], codigo2[100];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto1, ponto2;
    float densidade1, densidade2
    float pibp1, pibp2

    printf("Carta 01! Complete o que se pede :-)\n");
    printf("Digite o estado (apenas a letra inicial):\n");
    scanf(" %c", &estado1);

    printf("Digite o código do estado (letra inicial e o número de 0 a 4):\n");
    scanf("%s", codigo1);

    printf("Digite o nome completo da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto1);

    printf("\nCarta 02! Complete o que se pede :-)\n");
    printf("Digite o estado (apenas a letra inicial):\n");
    scanf(" %c", &estado2);

    printf("Digite o código do estado (letra inicial e o número de 0 a 4):\n");
    scanf("%s", codigo2);

    printf("Digite o nome completo da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &ponto2);

    densidade1 = populacao1/area1
    densidade2 = populacao2/area2

    pibp1 = pib1/populacao1
    pibp2 = pib2/populacao2

    printf("\nA carta 01 é: %c, %s, %s, %d, %.2f, %.2f, %d, %f, %f \n",
           estado1 \n, codigo1\n , cidade1\n , populacao1 " milhões de habitantes\n", area1 " km²\n", pib1" milhões de reais\n", ponto1 " pontos turísticos\n", "Densidade populacional de: ", densidade1\n, "PIB percapita de: ", pibp1 " reais");
    printf("A carta 02 é: %c, %s, %s, %d, %.2f, %.2f, %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, ponto2);
    

    return 0;
}
