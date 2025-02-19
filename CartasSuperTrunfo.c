#include <stdio.h>

int main() {
    // Declarando variáveis
    char estado1[2],estado2[2];                             // Armazena a letra do estado
    char codigo1[5],codigo2[5];                             // Código da Carta Àte 4 Caracteres ex.( A01)
    char nome1[50],nome2[50];                               // Nome da cidade ( Permite Espaços)
    float area1,area2,pib1,pib2;                            // Área em km² e PIB em Bilhões de Reais
    double populacao1,populacao2;                           // População da Cidade (Tipo Double Para Números Grandes)
    int pontos_turisticos1,pontos_turisticos2;              // Quantidade de pontos turísticos
    float pibpercapta1,pibpercapta2,densidade1,densidade2;  // PIB per capta e densidade populacional

    // Entrada de dados
    printf("**Cadastro da 1° Carta**\n");
    printf("Digite a letra do estado (A-H):\n");
    scanf("%1s", estado1); //%1s Para Aceitar apenas 1 caractere                    
    
    printf("Digite o Código da Carta( Até 4 Caracteres) : \n");
    scanf(" %4s", codigo1); // %4s para aceitar no máximo 4 caracteres

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome1); // Lê a linha inteira (Permite espaços no nome)

    printf("Digite a população da cidade(Sem Pontos!):\n");
    scanf(" %lf", &populacao1); // Lê um número decimal grande (tipo double)
    
    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area1); // Lê a área da cidade (tipo float)                        

    printf("Digite PIB(em bilhões de reais):\n");       
    scanf("%f", &pib1); // Lê o PIB (tipo float)

    printf("Digite o numero de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos1); // Lê um número inteiro             
    
    // **Cálculos**
    pibpercapta1 = pib1/populacao1;   // Calcula o PIB per capita    
    densidade1 = populacao1/area1;    // Calcula a densiade populacional

    //**Exibição dos Dados da 1° Carta**
    printf("     --CARTA 1--\n");             
    printf("Estado (A-H): %s\n", estado1);
    printf("Código da carta :%s\n", codigo1);
    printf("Nome da Cidade:%s\n", nome1);
    printf("População: %lf \n", populacao1);
    printf("Área: %.2f km²\n", area1);  // %.2f" mantém duas casas decimais)
    printf("PIB: %.2f bilhões de reais\n",pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("PIB per capta: %f Reais\n", pibpercapta1);
    printf("Densidade Populacional: %f hab/km²\n\n", densidade1);


    // Entrada de dados
    printf("**Cadastro da 2° Carta**\n");
    printf("Digite a letra do estado (A-H):\n");
    scanf("%1s", estado2); //%1s Para Aceitar apenas 1 caractere                    
    
    printf("Digite o Código da Carta( Até 4 Caracteres) : \n");
    scanf(" %4s", codigo2); // %4s para aceitar no máximo 4 caracteres

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", nome2); // Lê a linha inteira (Permite espaços no nome)

    printf("Digite a população da cidade(Sem Pontos!):\n");
    scanf(" %lf", &populacao2); // Lê um número decimal grande (tipo double)
    
    printf("Digite a área da cidade em km²:\n");
    scanf(" %f", &area2); // Lê a área da cidade (tipo float)                        

    printf("Digite PIB(em bilhões de reais):\n");       
    scanf("%f", &pib2); // Lê o PIB (tipo float)

    printf("Digite o numero de pontos turísticos:\n");
    scanf(" %d", &pontos_turisticos2); // Lê um número inteiro             
    
    // **Cálculos**
    pibpercapta2 = pib2/populacao2;   // Calcula o PIB per capita    
    densidade2 = populacao2/area2;    // Calcula a densiade populacional

    //**Exibição dos Dados da 2° Carta**
    printf("     --CARTA 2--\n");             
    printf("Estado (A-H): %s\n", estado2);
    printf("Código da carta :%s\n", codigo2);
    printf("Nome da Cidade:%s\n", nome2);
    printf("População: %lf \n", populacao2);
    printf("Área: %.2f km²\n", area2);  // %.2f" mantém duas casas decimais)
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB per capta: %f Reais\n", pibpercapta2);
    printf("Densidade Populacional: %f hab/km²\n\n", densidade2);

    return 0;
}
