//#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

//int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

//return 0;
//} 




#include <stdio.h>  // Biblioteca padrão para entrada/saída (printf, fgets)
#include <string.h> // Biblioteca para manipulação de strings (strcspn)

// Função para imprimir os dados de uma carta formatada
void imprimirCarta(char estado[], int idcarta, char nomecity[], int populacao, float area, float pib, int pturistico, float densidade, float pibcapita) {
  
    printf("Estado: %s\n", estado);                              // Exibe o estado da carta
    printf("Codigo: %d\n", idcarta);                             // Exibe o código identificador da carta
    printf("Nome da Cidade: %s\n", nomecity);                    // Exibe o nome da cidade
    printf("Populacao: %d\n", populacao);                        // Exibe a população
    printf("Area: %.2f\n", area);                                // Exibe a área com 2 casas decimais
    printf("PIB: %.2f\n", pib);                                  // Exibe o PIB com 2 casas decimais
    printf("Pontos Turisticos: %d\n", pturistico);               // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f\n", densidade);         // Exibe a densidade populacional calculada
    printf("PIB Per Capita: %.2f\n", pibcapita);                 // Exibe o PIB per capita calculado
    
}

int main(){
    // Declaração de variáveis para a CARTA 1
    char estado1[50];      // Armazena o estado da carta 1 (máximo 49 caracteres)
    int idcarta1;          // Armazena o código identificador da carta 1
    char nomecity1[50];    // Armazena o nome da cidade 1 (máximo 49 caracteres)
    int populacao1;        // Armazena a população da cidade 1
    float area1;           // Armazena a área da cidade 1
    float pib1;            // Armazena o PIB da cidade 1
    int pturistico1;       // Armazena o número de pontos turísticos da cidade 1
    float densidade1;      // Armazena a densidade populacional da cidade 1 (calculada)
    float pibcapita1;      // Armazena o PIB per capita da cidade 1 (calculado)

    // Declaração de variáveis para a CARTA 2
    char estado2[50];      // Armazena o estado da carta 2 (máximo 49 caracteres)
    int idcarta2;          // Armazena o código identificador da carta 2
    char nomecity2[50];    // Armazena o nome da cidade 2 (máximo 49 caracteres)
    int populacao2;        // Armazena a população da cidade 2
    float area2;           // Armazena a área da cidade 2
    float pib2;            // Armazena o PIB da cidade 2
    int pturistico2;       // Armazena o número de pontos turísticos da cidade 2
    float densidade2;      // Armazena a densidade populacional da cidade 2 (calculada)
    float pibcapita2;      // Armazena o PIB per capita da cidade 2 (calculado)
    
    char buffer[50];       // Buffer auxiliar para leitura de números (evita problemas com scanf)

    // ============== CADASTRO DA CARTA 1 ==============
    printf("Cadastro da Carta 1: \n");
    
    printf("Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);           // Lê a string do estado (até 49 caracteres)
    estado1[strcspn(estado1, "\n")] = 0;              // Remove o '\n' (quebra de linha) da string
    
    printf("Codigo: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê o código como string no buffer
    sscanf(buffer, "%d", &idcarta1);                  // Converte a string para inteiro
    
    printf("Nome da Cidade: \n");
    fgets(nomecity1, sizeof(nomecity1), stdin);       // Lê o nome da cidade (até 49 caracteres)
    nomecity1[strcspn(nomecity1, "\n")] = 0;          // Remove o '\n' da string
    
    printf("Populacao: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê a população como string no buffer
    sscanf(buffer, "%d", &populacao1);                // Converte a string para inteiro
    
    printf("Area: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê a área como string no buffer
    sscanf(buffer, "%f", &area1);                     // Converte a string para float
    
    printf("PIB: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê o PIB como string no buffer
    sscanf(buffer, "%f", &pib1);                      // Converte a string para float
    
    printf("Pontos Turisticos: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê os pontos turísticos como string no buffer
    sscanf(buffer, "%d", &pturistico1);               // Converte a string para inteiro
    
    // Calcula a densidade populacional (população / área)
    if (area1 != 0) densidade1 = (float)populacao1 / area1;  // Evita divisão por zero
    else densidade1 = 0;                              // Define densidade como 0 se a área for 0
    
    // Calcula o PIB per capita (PIB / população)
    if (populacao1 != 0) pibcapita1 = pib1 / populacao1;     // Evita divisão por zero
    else pibcapita1 = 0;                              // Define PIB per capita como 0 se população for 0
    
    printf("Carta 1 cadastrada com sucesso! \n\n");  // Mensagem de confirmação
    
    // ============== CADASTRO DA CARTA 2 ==============
    printf("Cadastro da Carta 2: \n");
    
    printf("Estado: \n");
    fgets(estado2, sizeof(estado2), stdin);           // Lê a string do estado (até 49 caracteres)
    estado2[strcspn(estado2, "\n")] = 0;              // Remove o '\n' da string
    
    printf("Codigo: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê o código como string no buffer
    sscanf(buffer, "%d", &idcarta2);                  // Converte a string para inteiro
    
    printf("Nome da Cidade: \n");
    fgets(nomecity2, sizeof(nomecity2), stdin);       // Lê o nome da cidade (até 49 caracteres)
    nomecity2[strcspn(nomecity2, "\n")] = 0;          // Remove o '\n' da string
    
    printf("Populacao: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê a população como string no buffer
    sscanf(buffer, "%d", &populacao2);                // Converte a string para inteiro
    
    printf("Area: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê a área como string no buffer
    sscanf(buffer, "%f", &area2);                     // Converte a string para float
    
    printf("PIB: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê o PIB como string no buffer
    sscanf(buffer, "%f", &pib2);                      // Converte a string para float
    
    printf("Pontos Turisticos: \n");
    fgets(buffer, sizeof(buffer), stdin);             // Lê os pontos turísticos como string no buffer
    sscanf(buffer, "%d", &pturistico2);               // Converte a string para inteiro
    
    // Calcula a densidade populacional (população / área)
    if (area2 != 0) densidade2 = (float)populacao2 / area2;  // Evita divisão por zero
    else densidade2 = 0;                              // Define densidade como 0 se a área for 0
    
    // Calcula o PIB per capita (PIB / população)
    if (populacao2 != 0) pibcapita2 = pib2 / populacao2;     // Evita divisão por zero
    else pibcapita2 = 0;                              // Define PIB per capita como 0 se população for 0
    
    printf("Carta 2 cadastrada com sucesso! \n\n");  // Mensagem de confirmação
    
    // ============== EXIBIÇÃO DOS DADOS ==============
    printf("A carta 1 é: \n");
    imprimirCarta(estado1, idcarta1, nomecity1, populacao1, area1, pib1, pturistico1, densidade1, pibcapita1);  // Exibe a carta 1

    printf("\nA carta 2 é: \n");
    imprimirCarta(estado2, idcarta2, nomecity2, populacao2, area2, pib2, pturistico2, densidade2, pibcapita2);  // Exibe a carta 2

    return 0;  // Finaliza o programa com sucesso
}