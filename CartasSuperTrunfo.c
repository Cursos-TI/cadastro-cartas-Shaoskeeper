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
//o void serve para que a funcao nao retorne nenhum valor, nesse caso a funcao imprimirCarta vai apenas imprimir na tela os dados das cartas de super trunfo que foram digitados pelo usuario.
//utilizei o void para evitar a repeticao de codigo para cada variavel utilizando o scanf e printf em cada carta que for criada ou adiconada futuramente.
void imprimirCarta(char estado[], int idcarta, char nomecity[], int populacao, float area, float pib, int pturistico, float densidade, float pibcapita) {
  
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", idcarta);
    printf("Nome da Cidade: %s\n", nomecity);
    printf("Populacao: %f\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", pibcapita);
    
}

//a funcao main vai ser responsavel por solicitar ao usuario digitar os dados das cartas de super trunfo de numero 1 e 2, e depois imprimir na tela os dados digitados pelo usuario.
int main(){
// declarar as variaveis para armazenar os dados das cartas de super trunfo de numero 1

    char estado1[50];
    int idcarta1;
    char nomecity1[50];
    float populacao1;
    float area1;
    float pib1;
    int pturistico1;
    float densidade1;
    float pibcapita1;

// declarar as variaveis para armazenar os dados das cartas de super trunfo de numero 2
  
    char estado2[50];
    int idcarta2;
    char nomecity2[50];
    int populacao2;
    float area2;
    float pib2;
    int pturistico2;
    float densidade2;
    float pibcapita2;



    // solicitar ao usuario digitar os dados das cartas de super trunfo de numero 1
    printf("Cadastro da Carta 1: \n");
// solicitar que o usuario digite o estado, codigo, nome da cidade, populacao, area, pib e pontos turisticos da carta 1
    printf("Estado: \n");
    //nesse scanf abaixo eu usei o " %[^\n]" para que o usuario possa digitar o estado com espacos, caso contrario ele nao conseguiria digitar estados com espacos
    scanf(" %[^\n]", estado1);
// solicitar que o usuario digite o codigo da carta 1
    printf("Codigo: \n");
    scanf("%d", &idcarta1);
// solicitar que o usuario digite o nome da cidade da carta 1
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecity1);
// solicitar que o usuario digite a populacao da carta 1
    printf("Populacao: \n");
    scanf("%d", &populacao1);
// solicitar que o usuario digite a area da carta 1
    printf("Area: \n");
    scanf("%f", &area1);
// solicitar que o usuario digite o pib da carta 1
    printf("PIB: \n");
    scanf("%f", &pib1);
// solicitar que o usuario digite os pontos turisticos da carta 1
    printf("Pontos Turisticos: \n");
    scanf("%d", &pturistico1);
// calcular a densidade populacional 
    densidade1 = (populacao1 / area1);
    printf("Densidade Populacional: %.2f\n", densidade1); 
// calcular o pib per capita    
    pibcapita1 = (pib1 / populacao1);
    printf("PIB per Capita: %.2f\n", pibcapita1);
// imprimir a conclusao da primeira carta
    printf("Carta 1 cadastrada com sucesso! \n");
    // fim da carta 1

 // solicitar ao usuario digitar os dados das cartas de super trunfo de numero 2   
    printf("Cadastro da Carta 2: \n");
// solicitar que o usuario digite o estado, codigo, nome da cidade, populacao, area, pib e pontos turisticos da carta 2
    printf("Estado: \n");
   //nesse scanf abaixo eu usei o " %[^\n]" para que o usuario possa digitar o estado com espacos, caso contrario ele nao conseguiria digitar estados com espacos
    scanf(" %[^\n]", estado2);
// solicitar que o usuario digite o codigo da carta 2
    printf("Codigo: \n");
    scanf("%d", &idcarta2);
// solicitar que o usuario digite o nome da cidade da carta 2
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomecity2);
// solicitar que o usuario digite a populacao da carta 2
    printf("Populacao: \n");
    scanf("%d", &populacao2);
// solicitar que o usuario digite a area da carta 2
    printf("Area: \n");
    scanf("%f", &area2);
// solicitar que o usuario digite o pib da carta 2
    printf("PIB: \n");
    scanf("%f", &pib2);
// solicitar que o usuario digite os pontos turisticos da carta 2
    printf("Pontos Turisticos: \n");
    scanf("%d", &pturistico2);
// calcular a densidade populacional 
    densidade2 = (populacao2 / area2);
    printf("Densidade Populacional: %.2f\n", densidade2);
// calcular o pib per capita    
    pibcapita2 = (pib2 / populacao2);
    printf("PIB per Capita: %.2f\n", pibcapita2);
// imprimir a conclusao da segunda carta
    printf("Carta 2 cadastrada com sucesso! \n");
//fim da carta 2

//nessa parte do codigo eu vou imprimir na tela os dados das cartas de super trunfo de numero 1 e 2 que foram digitados pelo usuario.
    printf("A carta 1 é: \n");
    imprimirCarta(estado1, idcarta1, nomecity1, populacao1, area1, pib1, pturistico1, densidade1, pibcapita1);

    printf("A carta 2 é: \n");
    imprimirCarta(estado2, idcarta2, nomecity2, populacao2, area2, pib2, pturistico2, densidade2, pibcapita2);

   // fim das cartas de super trunfo

    return 0; // encerrar o programa
}