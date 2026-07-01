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

#include <stdio.h>
int main(){
// declarar as variaveis para armazenar os dados das cartas de super trunfo de numero 1

    char estado1[50];
    int idcarta1;
    char nomecity1[50];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;

// declarar as variaveis para armazenar os dados das cartas de super trunfo de numero 2
  
    char estado2[50];
    int idcarta2;
    char nomecity2[50];
    int populacao2;
    float area2;
    float pib2;
    int pturistico2;

    // solicitar ao usuario digitar os dados das cartas de super trunfo de numero 1
    printf("Carta1: \n");
// solicitar que o usuario digite o estado, codigo, nome da cidade, populacao, area, pib e pontos turisticos da carta 1
    printf("Estado: \n");
    //nesse scanf abaixo eu usei o " %[^\n]" para que o usuario possa digitar o estado com espacos, caso contrario ele nao conseguiria digitar estados com espacos
    scanf(" %[^\n]", estado1);

    printf("Codigo: \n");
    scanf("%d", &idcarta1);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecity1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pturistico1);
    // fim da carta 1

 // solicitar ao usuario digitar os dados das cartas de super trunfo de numero 2   
    printf("Carta2: \n");
// solicitar que o usuario digite o estado, codigo, nome da cidade, populacao, area, pib e pontos turisticos da carta 2
    printf("Estado: \n");
   //nesse scanf abaixo eu usei o " %[^\n]" para que o usuario possa digitar o estado com espacos, caso contrario ele nao conseguiria digitar estados com espacos
    scanf(" %[^\n]", estado2);

    printf("Codigo: \n");
    scanf("%d", &idcarta2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecity2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pturistico2);
//fim da carta 2

//nessa parte do codigo eu vou imprimir na tela os dados das cartas de super trunfo de numero 1 e 2 
    printf("A carta 1 é: \n");
    imprimirCarta(estado1, idcarta1, nomecity1, populacao1, area1, pib1, pturistico1);

    printf("A carta 2 é: \n");
    imprimirCarta(estado2, idcarta2, nomecity2, populacao2, area2, pib2, pturistico2);

   // fim das cartas de super trunfo

    return 0; // encerrar o programa
}
