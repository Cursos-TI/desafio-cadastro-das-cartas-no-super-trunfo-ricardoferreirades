/*
    Este programa coleta informações de duas cidades para criar cartas do jogo "Super Trunfo".
    Para cada cidade, o usuário informa: estado, código, nome, população, área, PIB e número de pontos turísticos.
    Ao final, o programa exibe os dados das duas cartas cadastradas.
*/
#include <stdio.h>

int main() {
    char codigo_1[20], codigo_2[20];
    char nome_cidade_1[100], nome_cidade_2[100];
    char nome_estado_1[100], nome_estado_2[100];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;

    // coleta os dados da cidade 1

    printf("Digite o estado da cidade 1: \n");
    scanf(" %[^\n]", nome_estado_1);

    printf("Digite o código da cidade 1: \n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade 1: \n");
    scanf(" %[^\n]", nome_cidade_1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao_1);

    printf("Digite a área da cidade 1: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontos_turisticos_1);

    // Feedback ao usuário de que os dados da carta 1 foram inseridos com sucesso
    printf("\n\n");
    printf("Dados da cidade 1 registrados com sucesso! \n");
    printf("Digite agora os dados da cidade 2: \n\n");
    
    // coleta os dados da carta 2

    printf("Digite o estado da cidade 2: \n");
    scanf(" %[^\n]", nome_estado_2);
    
    printf("Digite o código da cidade 2: \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade 2: \n");
    scanf(" %[^\n]", nome_cidade_2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao_2);

    printf("Digite a área da cidade 2: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontos_turisticos_2);

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
