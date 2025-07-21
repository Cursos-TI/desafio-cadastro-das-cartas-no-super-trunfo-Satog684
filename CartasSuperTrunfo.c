#include <stdio.h>
 
int main() {
    // Variáveis para os dados da carta 1 

    char estado1;
    char codigo1[5]; // Para o Código da carta
    char cidade1[100];
    int populacao1;
    float area1,pib1;
    int pontosT1; //Pontos turistivos do estado
    

    //Variáveis para os dados da carta 2 
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontosT2;




    //entrada de dados para a carta 1
    printf("dados da primeira carta\n");
    printf("Digite o estado da carta 1: ");
    scanf("%c",&estado1);
    getchar();  // Limpa o buffer de nova linha
    printf("Digite o Codigo da carta 1: ");
    scanf("%s",&codigo1);
    getchar();  // Limpa o buffer de nova linha
    printf("Digite o nome da cidade 1: ");
    scanf("%s",&cidade1);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual é a populacao da cidade: ");
    scanf("%d",&populacao1);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual a area da cidade: ");
    scanf("%f",&area1);
    getchar();  // Limpa o buffer de nova linha
    printf("Pontos turisticos da cidade: ");
    scanf("%d",&pontosT1);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual a quantidade do pib estado: ");
    scanf("%f",&pib1);
    getchar();  // Limpa o buffer de nova linha


    //entrada de dados para a carta 2
    printf("\nDados da segunda carta\n");
    printf("Digite o estado da carta 2: ");
    scanf("%c",&estado2);
    getchar();  // Limpa o buffer de nova linha
    printf("Digite o Codigo da carta 2: ");
    scanf("%s",&codigo2);
    getchar();  // Limpa o buffer de nova linha
    printf("Digite o nome da cidade 2: ");
    scanf("%s",&cidade2);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual é a populacao da cidade: ");
    scanf("%d",&populacao2);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual a area da cidade: ");
    scanf("%f",&area2);
    getchar();  // Limpa o buffer de nova linha
    printf("Pontos turisticos da cidade: ");
    scanf("%d",&pontosT2);
    getchar();  // Limpa o buffer de nova linha
    printf("Qual a quantidade do pib estado: ");
    scanf("%f",&pib2);
    getchar();  // Limpa o buffer de nova linha



    //Exibição das cartas
    printf("\n\n");
    printf("              Carta 1               \n");
    printf("\n");
    printf("Estado:                         %c\n", estado1);
    printf("Código:                         %s\n", codigo1);
    printf("Nome da Cidade:                 %s\n", cidade1);
    printf("População:                      %d\n", populacao1);
    printf("Área:                           %.2f km²\n", area1);
    printf("PIB:                            %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos:    %d\n", pontosT1);

    //Exibição das cartas
    printf("\n\n");
    printf("              Carta 2               \n");
    printf("\n");
    printf("Estado:                         %c\n", estado2);
    printf("Código:                         %s\n", codigo2);
    printf("Nome da Cidade:                 %s\n", cidade2);
    printf("População:                      %d\n", populacao2);
    printf("Área:                           %.2f km²\n", area2);
    printf("PIB:                            %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos:    %d\n", pontosT2);
    return 0;
}
