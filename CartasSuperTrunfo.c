#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Flavio Silva

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigoCarta[4];
    char cidade[31];
    int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o estado:\n");
    scanf(" %c",&estado);

    printf("Digite o código da carta:\n");
    scanf("%3s",codigoCarta);

    printf("Digite o nome da cidade:\n");
    scanf("%30s",cidade);

    printf("Digite a população:\n");
    scanf("%d",&populacao);

    printf("Digite a Area:\n");
    scanf("%f",&area);

    printf("Digite o PIB:\n");
    scanf("%f",&pib);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d",&numeroPontoTuristico);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n\n-- Dados da carta--\n\n");
    printf("Estado: %c\n",estado);
    printf("Código da Carta: %s \n",codigoCarta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km\n",area);
    printf("PIB %.2f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %d\n\n",numeroPontoTuristico);
    return 0;
}
