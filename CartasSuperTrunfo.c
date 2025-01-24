#include <stdio.h>

int main() {
                                     //Declarando variáveis:
                    
    char estado;                // Estado (letra A-H)
    int cidade;                 // Número da cidade (1-4) 
    float populacao;            // População da cidade
    float area;                 // Área da cidade em km²
    int pontos_turisticos;      // Número de pontos turísticos
    float pib;                  // PIB da cidade em milhões   
    

                                     //Cadastro das Cartas:
    //printf para imprimir as perguntas.
    //scanf para armazenar os dados inseridos.
    printf("Digite a letra do estado (A-H):\n");        //Solicitando a letra do estado para o cadastro da carta.
    scanf("%c", &estado);                               
    
    printf("Digite o número da cidade (1-4):\n");       //Solicitando o numero da cidade de 1 a 4.
    scanf("%d", &cidade);

    printf("Digite a população da cidade(Milhões):\n"); //Solicitando a população da cidade.
    scanf("%f", &populacao);
    
    printf("Digite a área da cidade em km²:\n");        //Solicitação da área da cidade(em km²).
    scanf("%f", &area);                               

    printf("Digite o numero de pontos turísticos:\n");  //Solicitação da quantidade de pontos turísticos.
    scanf("%d", &pontos_turisticos);                  
    
    printf("Digite o pib da cidade(Bilhões):\n");       //Solicitação do PIB da cidade.
    scanf("%f", &pib);                                
    

                                // Exibição dos Dados das Cartas: 
    printf("Estado (A-H): %c \n",estado);               // "printf" sendo usado para imprimir os dados da carta cadastrada.
    printf("Cidade (1-4): %d \n", cidade);
    printf("População: %.2fmilhões \n", populacao);     //"%.2f" usado para adicionar as grandezas(milhões,km²,reais)
    printf("Área: %.2f km² \n", area);                 
    printf("Pontos turísticos: %d \n", pontos_turisticos);
    printf("PIB: %.2f Bilhões de Reais \n", pib);
    

    return 0;
}
