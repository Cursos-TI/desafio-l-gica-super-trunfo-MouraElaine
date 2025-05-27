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

int opcao;

    printf("Menu de Comparação de Cartas\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("0. Sair\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
    printf("\nComparando População:\n");
    printf("%s: %d habitantes\n", nomeCidade1, populacao1);
    printf("%s: %d habitantes\n", nomeCidade2, populacao2);
    if (populacao1 > populacao2)
    printf("Vencedor: %s\n", nomeCidade1);
    else if (populacao2 > populacao1)
    printf("Vencedor: %s\n", nomeCidade2);
    else
    printf("Empate!\n");
    break;

    case 2:
    printf("\nComparando Área:\n");
    printf("%s: %.2f km²\n", nomeCidade1, area1);
    printf("%s: %.2f km²\n", nomeCidade2, area2);
    if (area1 > area2)
    printf("Vencedor: %s\n", nomeCidade1);
    else if (area2 > area1)
    printf("Vencedor: %s\n", nomeCidade2);
    else
    printf("Empate!\n");
    break;

    case 3:
    printf("\nComparando PIB:\n");
    printf("%s: %.2f bilhões de reais\n", nomeCidade1, pib1);
    printf("%s: %.2f bilhões de reais\n", nomeCidade2, pib2);
    if (pib1 > pib2)
    printf("Vencedor: %s\n", nomeCidade1);
    else if (pib2 > pib1)
    printf("Vencedor: %s\n", nomeCidade2);
    else
    printf("Empate!\n");
    break;

    case 4:
    printf("\nComparando Pontos Turísticos:\n");
    printf("%s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
    printf("%s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);
    if (pontosTuristicos1 > pontosTuristicos2)
    printf("Vencedor: %s\n", nomeCidade1);
    else if (pontosTuristicos2 > pontosTuristicos1)
    printf("Vencedor: %s\n", nomeCidade2);
    else
    printf("Empate!\n");
    break;

    case 5:
    printf("\nComparando Densidade Populacional:\n");
    printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
    printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
    if (densidade1 > densidade2)
    printf("Vencedor: %s\n", nomeCidade1);
    else if (densidade2 > densidade1)
    printf("Vencedor: %s\n", nomeCidade2);
    else
    printf("Empate!\n");
    break;

    default:
    if (opcao != 0)
    printf("Opção inválida!\n");
    }

// Definição da struct Cidade
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
} Cidade;

// Função para exibir o menu de atributos
void exibirMenu(int opcoesDisponiveis[]) {
    printf("\nEscolha um atributo para comparar:\n");
    for (int i = 1; i <= 5; i++) {
        if (opcoesDisponiveis[i]) {
            switch (i) {
                case 1: printf("1. População\n"); break;
                case 2: printf("2. Área\n"); break;
                case 3: printf("3. PIB\n"); break;
                case 4: printf("4. Pontos Turísticos\n"); break;
                case 5: printf("5. Densidade Populacional\n"); break;
            }
        }
    }
}

// Função para obter o valor do atributo de uma cidade
float getValor(Cidade c, int atributo) {
    switch (atributo) {
        case 1: return (float)c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return (float)c.pontosTuristicos;
        case 5: return c.densidade;
        default: return 0;
    }
}

    // Inicialização das cidades
    Cidade carta1 = {"São Paulo", 12325000, 1521.11, 699.28, 50, 8102.47};
    Cidade carta2 = {"Rio de Janeiro", 6748000, 1200.25, 300.50, 30, 5622.24};

    int atributosDisponiveis[6] = {0, 1, 1, 1, 1, 1}; 
    int escolha1, escolha2;

    // Escolha do primeiro atributo
    exibirMenu(atributosDisponiveis);
    printf("Escolha o primeiro atributo (número): ");
    scanf("%d", &escolha1);
    atributosDisponiveis[escolha1] = 0;

    // Escolha do segundo atributo
    exibirMenu(atributosDisponiveis);
    printf("Escolha o segundo atributo (número): ");
    scanf("%d", &escolha2);

    // Comparação
    float valor1Carta1 = getValor(carta1, escolha1);
    float valor1Carta2 = getValor(carta2, escolha1);
    float valor2Carta1 = getValor(carta1, escolha2);
    float valor2Carta2 = getValor(carta2, escolha2);

    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Comparação do primeiro atributo
    if (escolha1 == 5) {
        if (valor1Carta1 < valor1Carta2) pontosCarta1++;
        else if (valor1Carta2 < valor1Carta1) pontosCarta2++;
    } else {
        if (valor1Carta1 > valor1Carta2) pontosCarta1++;
        else if (valor1Carta2 > valor1Carta1) pontosCarta2++;
    }

    // Comparação do segundo atributo
    if (escolha2 == 5) {
        if (valor2Carta1 < valor2Carta2) pontosCarta1++;
        else if (valor2Carta2 < valor2Carta1) pontosCarta2++;
    } else {
        if (valor2Carta1 > valor2Carta2) pontosCarta1++;
        else if (valor2Carta2 > valor2Carta1) pontosCarta2++;
    }

    float somaCarta1 = valor1Carta1 + valor2Carta1;
    float somaCarta2 = valor1Carta2 + valor2Carta2;

    // Resultados
    printf("\n======= RESULTADO DA COMPARAÇÃO =======\n");
    printf("Cidades: %s vs %s\n", carta1.nome, carta2.nome);

    printf("\nAtributo 1: ");
    switch (escolha1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Populacional\n"); break;
    }
    printf("%s: %.2f\n", carta1.nome, valor1Carta1);
    printf("%s: %.2f\n", carta2.nome, valor1Carta2);

    printf("\nAtributo 2: ");
    switch (escolha2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Populacional\n"); break;
    }
    printf("%s: %.2f\n", carta1.nome, valor2Carta1);
    printf("%s: %.2f\n", carta2.nome, valor2Carta2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", carta1.nome, somaCarta1);
    printf("%s: %.2f\n", carta2.nome, somaCarta2);

    printf("\nResultado final: ");
    if (somaCarta1 > somaCarta2) {
        printf("%s venceu!\n", carta1.nome);
    } else if (somaCarta2 > somaCarta1) {
        printf("%s venceu!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }


    return 0;
}
