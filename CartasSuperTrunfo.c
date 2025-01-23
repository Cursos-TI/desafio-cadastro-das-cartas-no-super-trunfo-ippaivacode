#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {  //declaração de variáveis.
    char estado[20];
    char codigo[20];       
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    // Cadastro das Cartas:
    printf("Digite o estado da cidade: "); //solicitando o estado para o usuário.
    scanf("%19s", estado); //usando o scanf para guardar a informação para poder imprimir depois
    //usei o "%19s" para limitar a entrada para nao causar estouro de memória.

    printf("Digite o código da carta: ");//solicitação do código da carta pro usuário.
    scanf("%19s", codigo);//usando o (%19s) pelo mesmo motivo da variavel "estado"
    
    printf("Digite o nome da cidade: ");//solicitando o nome da cidade pro usuário.
    scanf("%s", &nome);//scanf para memorizar a informação.

    printf("Digite a população da cidade: ");//solicitação da população da cidade.
    scanf("%f", &populacao);//scanf para memorizar a informação.

    printf("Digite a área da cidade: ");//solicitação da área da cidade.
    scanf("%f", &area);//scanf para memorizar a informação.

    printf("Digite o numero de pontos turísticos: ");//solicitação da quantidade de pontos turísticos.
    scanf("%f", &pontosturisticos);//scanf para memorizar a informação.
    
    printf("Digite o pib da cidade: ");//solicitação do pib percapita da cidade.
    scanf("%f", &pib);//scanf para memorizar a informação.
    

    // Exibição dos Dados das Cartas: //usando o "printf" para imprimir os dados coletados anteriormente.
    printf("Codigo : %s \n",codigo);
    printf("Nome : %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);//usei o "%.2f" para poder adicionar a grandeza, no caso em (km²).
    printf("Pontos turísticos: %d \n", pontosturisticos);
    printf("PIB: %.2f Bilhões de reais \n", pib);//usei o "%.2f" para poder adicionar a grandeza, no caso (Bilhões de reais)
    

    return 0;
}
