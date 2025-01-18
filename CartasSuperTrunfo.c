#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Flavio Silva


void printCartaPopulcaoInfo(char *codigoCarta1,int populacao1,char *codigoCarta2,int populacao2,char *mensagem){
    printf("%s",mensagem);
    printf("Carta: %s População: %d > Carta: %s População: %d\n\n", codigoCarta1,populacao1,codigoCarta2, populacao2);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

        //Dados da carta do computador
    char estadoComputador = 'B';
    char codigoCartaComputador[4] = "B02";
    char cidadeComputador[31] = "Cabral Z";
    int populacaoComputador = 10000;
    float areaComputador = 100000;
    float pibComputador= 100000000;
    int numeroPontoTuristicoComputador = 100;

    float densidadePopulacionalComputador = (populacaoComputador / areaComputador);
    float pibPerCapitaComputador = (pibComputador / populacaoComputador);

    char estado;
    char codigoCarta[4];
    char cidade[31];
    int populacao;
    float area;
    float pib;
    int numeroPontoTuristico;

    float densidadePopulacional;
    float pibPerCapita;
    
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

    pibPerCapita = (pib / populacao);
    densidadePopulacional = (populacao / area);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("### Dados da carta ###\n");

    printf("Estado: %c\n",estado);
    printf("Código da Carta: %s \n",codigoCarta);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km\n",area);
    printf("PIB %.2f bilhões de reais\n",pib);
    printf("Número de Pontos Turísticos: %d\n\n",numeroPontoTuristico);
    printf("PIB per cpita é: %.2f\n",pibPerCapita);
    printf("Densidade Populacional é: %.2f\n\n",densidadePopulacional);

    printf("### Carta do Computador ###\n");
    printf("Estado: %c\n",estadoComputador);
    printf("Código da Carta: %s \n",codigoCartaComputador);
    printf("Nome da Cidade: %s\n",cidadeComputador);
    printf("População: %d\n",populacaoComputador);
    printf("Área: %.2f km\n",area);
    printf("PIB %.2f bilhões de reais\n",pibComputador);
    printf("Número de Pontos Turísticos: %d\n\n",numeroPontoTuristicoComputador);

    printf("PIB per cpita é: %.2f\n",pibPerCapitaComputador);
    printf("Densidade Populacional é: %.2f\n\n",densidadePopulacionalComputador);


    int opcaoComparacao;

    printf("Escolha uma propriedade para comparação!\n\n");
    printf("1. População\n");
    printf("2. Densidade Populacional\n");
    scanf("%d",&opcaoComparacao);

    switch (opcaoComparacao)
    {
    case 1:
        if(populacao > populacaoComputador) {
            printCartaPopulcaoInfo(codigoCarta,populacao,codigoCartaComputador,populacaoComputador,"Parabéns Você Ganhou!!\n");
        }else if(populacao == populacaoComputador) {
            printCartaPopulcaoInfo(codigoCarta,populacao,codigoCartaComputador,populacaoComputador,"Empate!!\n");
        }else {
            printCartaPopulcaoInfo(codigoCarta,populacao,codigoCartaComputador,populacaoComputador,"Você perdeu!!\n");
        }
        break;
    case 2:
        if(densidadePopulacional < densidadePopulacionalComputador) {
            printf("Parabéns Você Ganhou!!\n");
            printf("Carta: %s Densidade: %.2f > Carta: %s Densidade : %.2f\n", codigoCarta,densidadePopulacional,codigoCartaComputador, densidadePopulacionalComputador);
        }else if(densidadePopulacional == densidadePopulacionalComputador) {
            printf("Empate!!\n");
            printf("Carta: %s Densidade: %.2f > Carta: %s Densidade : %.2f\n", codigoCarta,densidadePopulacional,codigoCartaComputador, densidadePopulacionalComputador);

        }else {
            printf("Você perdeu!!\n");
            printf("Carta: %s Densidade: %.2f > Carta: %s Densidade : %.2f\n", codigoCarta,densidadePopulacional,codigoCartaComputador, densidadePopulacionalComputador);
        }
        break;    
    default:
        printf("Opacao Invalida");
        break;
    }
    
    return 0;
}
