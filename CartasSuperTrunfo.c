#include <stdio.h>

// Desafio Super Trunfo - Países
// Etapa 1 - Novato - Cadastro das Cartas

int main() {
    // Definindo as variáveis para os atributos das Cidades 1 e 2
    int populacao1, pontostur1, populacao2, pontostur2; /*Variáveis de número inteiro definidas na mesma linha*/
    float area1, area2, pib1, pib2; /*Variáveis com casas decimais*/
    char codigo1[3], codigo2[3];
    char estado1, estado2;
    char cidade1[40], cidade2[40]; /*variáveis de texto*/
    
    // Cadastro das Cartas:

    printf("Vamos iniciar o cadastro das cartas.\n *Lembre-se que o Código da Carta é a letra do estado + um número com 2 dígitos. \n (Exemplos: B03, A04)\n\n Digite o Estado da Carta 1: \n");
    scanf(" %c", &estado1); /*Dando instruções para entrada e armazenamento na variável*/
    
    printf("Digite o Código da Carta 1: \n");
    scanf(" %s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a população: \n");
    scanf(" %d", &populacao1);

    printf("Digite a Área em Km²: \n");
    scanf (" %f", &area1);

    printf ("Digite o PIB em bilhões: \n");
    scanf (" %f", &pib1);

    printf ("Digite a quantidade de Pontos Turísticos: \n");
    scanf (" %d", &pontostur1);

    //Iniciando a entrada dos dados da segunda carta:

    printf("\n Agora os dados da Carta 2: \n \n Digite o Estado da Carta 2: \n");
    scanf(" %c", &estado2); /*Dando instruções para entrada e armazenamento na variável*/
    
    printf("Digite o Código da Carta: \n");
    scanf(" %s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", &cidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a Área em Km²: \n");
    scanf (" %f", &area2);

    printf ("Digite o PIB em bilhões: \n");
    scanf (" %f", &pib2);

    printf ("Digite a quantidade de Pontos Turísticos: \n");
    scanf (" %d", &pontostur2);

    
    // Exibição dos Dados das Cartas:
    //Exibindo a carta 1
    printf ("\n\nCarta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.1f Km²\n", area1);
    printf ("PIB: %.2f bilhões de Reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontostur1);
    //Exibindo a carta 2
    printf ("\n\nCarta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.1f Km²\n", area2);
    printf ("PIB: %.2f bilhões de Reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontostur2);
    
    return 0; /*Fim do código*/
}
