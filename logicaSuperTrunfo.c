#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    
    // Variáveis da carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Variáveis da carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // Leitura dos dados da carta 1
    printf("\nCadastro da Carta 1\n");
    printf("Digite as duas letras do estado: ");
    scanf(" %s", &estado1);

    printf("Digite o código da carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite as duas letras do estado: ");
    scanf(" %s", &estado2);

    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Densidade
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // Cálculos do PIB
    pibPerCapita1 = (float)(pib1 * 1e9) / populacao1; 
    pibPerCapita2 = (float)(pib2 * 1e9) / populacao2;

    // Comparação de População
    printf("\nComparação: População\n");

    if (populacao1 > populacao2) {
    printf("Carta 1 – %s (%s): %lu \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 – %s (%s): %lu \n", nomeCidade2, estado2, populacao2);
    printf("Carta 1 (%s) venceu!\n", nomeCidade1);
}   else if (populacao2 > populacao1) {
    printf("Carta 1 – %s (%s): %lu \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 – %s (%s): %lu \n", nomeCidade2, estado2, populacao2);
    printf("Carta 2 (%s) venceu!\n", nomeCidade2);
}   else {
    printf("Carta 1 – %s (%s): %lu \n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 – %s (%s): %lu \n", nomeCidade2, estado2, populacao2);
    printf("Empate! Ambas as cidades têm a mesma população.\n");
}

    return 0;
}
