/*
    Este programa coleta informações de duas cidades para criar cartas do jogo "Super Trunfo".
    Para cada cidade, o usuário informa: estado, código, nome, população, área, PIB e número de pontos turísticos.
    Ao final, o programa exibe os dados das duas cartas cadastradas.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para armazenar os dados das cidades
    char codigo_1[20], codigo_2[20];
    char nome_cidade_1[100], nome_cidade_2[100];
    char nome_estado_1[100], nome_estado_2[100];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // Coleta os dados da cidade 1

    printf("Digite o estado da cidade 1: \n");
    fgets(nome_estado_1, sizeof(nome_estado_1), stdin); // Lê o nome do estado (permite espaços)
    nome_estado_1[strcspn(nome_estado_1, "\n")] = 0;  // Remove a nova linha

    printf("Digite o código da cidade 1: \n");
    fgets(codigo_1, sizeof(codigo_1), stdin); // Lê o código da cidade
    codigo_1[strcspn(codigo_1, "\n")] = 0;  // Remove a nova linha

    printf("Digite o nome da cidade 1: \n");
    fgets(nome_cidade_1, sizeof(nome_cidade_1), stdin); // Lê o nome da cidade (permite espaços)
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = 0;  // Remove a nova linha

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao_1); // Lê a população (inteiro)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area_1); // Lê a área (float)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib_1); // Lê o PIB (float)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontos_turisticos_1); // Lê a quantidade de pontos turísticos (inteiro)
    getchar(); // Consome o '\n' deixado pelo scanf

    // Coleta os dados da cidade 2

    printf("Digite o estado da cidade 2: \n");
    fgets(nome_estado_2, sizeof(nome_estado_2), stdin); // Lê o nome do estado (permite espaços)
    nome_estado_2[strcspn(nome_estado_2, "\n")] = 0;  // Remove a nova linha

    printf("Digite o código da cidade 2: \n");
    fgets(codigo_2, sizeof(codigo_2), stdin); // Lê o código da cidade
    codigo_2[strcspn(codigo_2, "\n")] = 0;  // Remove a nova linha

    printf("Digite o nome da cidade 2: \n");
    fgets(nome_cidade_2, sizeof(nome_cidade_2), stdin); // Lê o nome da cidade (permite espaços)
    nome_cidade_2[strcspn(nome_cidade_2, "\n")] = 0;  // Remove a nova linha

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao_2); // Lê a população (inteiro)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area_2); // Lê a área (float)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib_2); // Lê o PIB (float)
    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontos_turisticos_2); // Lê a quantidade de pontos turísticos (inteiro)
    getchar(); // Consome o '\n' deixado pelo scanf

    // Imprime os dados das cartas

    printf("\n\n");
    printf("/////// Cartas Super Trunfo //////\n\n");

    // Imprime os dados da carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", nome_estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n",  pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("\n\n");

    // Imprime os dados da carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", nome_estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n",  pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("\n\n");

    return 0;
}
