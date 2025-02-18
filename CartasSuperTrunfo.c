#include <stdio.h>

int main() {
                                     //Declarando variáveis:
                    
    char estado[2];                // Estado (letra A-H)
    char codigo[4]; 
    char nome[50];                  // Nome da cidade (1-4) 
    float populacao, area, pib;  // População,Área e PIB da cidade
    int pontos_turisticos;      // Número de pontos turísticos
    int carta;                  // Númeração da carta
                   // Código da carta
    

                                     //Cadastro das Cartas:
      //printf para imprimir as perguntas.
      //scanf para armazenar os dados inseridos.
    printf("Digite a letra do estado (A-H):\n");        //Solicitando a letra do estado para o cadastro da carta.
    scanf(" %1s", estado);        //1s Para Aceitar Só 1 letra                      
    
    printf("Digite o Código da Cidade( Até 4 Caracteres) : \n");        //Solicitando o Código da cidade.
    scanf(" %4s", codigo); // %4s para aceitar até 4 caracteres

    printf("Digite o Nome da Cidade: \n");       //Solicitação do Número da Carta.
    scanf(" %[^\n]", nome); // Captura espaços no nome da cidade

    printf("Digite a população da cidade:\n"); //Solicitando a população da cidade.
    scanf("%f", &populacao);
    
    printf("Digite a área da cidade em km²:\n");        //Solicitação da área da cidade(em km²).
    scanf("%f", &area);                             

    printf("Digite PIB(em bilhões de reais):\n");       
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos:\n");  //Solicitação da quantidade de pontos turísticos.
    scanf(" %d", &pontos_turisticos);                  
    
                                    
    

                                // Exibição dos Dados da 1° Carta
                                    printf("CARTA 1:\n");                        
    printf("Estado (A-H): %s\n", estado);              // "printf" sendo usado para imprimir os dados da carta cadastrada.
    printf("Código da carta :%s\n", codigo);
    printf("Cidade:%s\n", nome);
    printf("População: %.2f \n", populacao);    //"%.2f" usado para adicionar/limitar a 2 casas decimais)
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);                
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    
    

    return 0;
}
