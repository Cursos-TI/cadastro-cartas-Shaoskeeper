#include <stdio.h>
#include <string.h>

void imprimirCarta(char estado[], int idcarta, char nomecity[], int populacao, float area, float pib, int pturistico, float densidade, float pibcapita) {
  
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", idcarta);
    printf("Nome da Cidade: %s\n", nomecity);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pturistico);
    printf("Densidade Populacional: %.2f\n", densidade);
    printf("PIB Per Capita: %.2f\n", pibcapita);
    
}

int main(){
    char estado1[50];
    int idcarta1;
    char nomecity1[50];
    int populacao1;
    float area1;
    float pib1;
    int pturistico1;
    float densidade1;
    float pibcapita1;

    char estado2[50];
    int idcarta2;
    char nomecity2[50];
    int populacao2;
    float area2;
    float pib2;
    int pturistico2;
    float densidade2;
    float pibcapita2;
    
    char buffer[50];

    printf("Cadastro da Carta 1: \n");
    printf("Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;
    
    printf("Codigo: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &idcarta1);
    
    printf("Nome da Cidade: \n");
    fgets(nomecity1, sizeof(nomecity1), stdin);
    nomecity1[strcspn(nomecity1, "\n")] = 0;
    
    printf("Populacao: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao1);
    
    printf("Area: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);
    
    printf("PIB: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);
    
    printf("Pontos Turisticos: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pturistico1);
    
    if (area1 != 0) densidade1 = (float)populacao1 / area1;
    else densidade1 = 0;
    
    if (populacao1 != 0) pibcapita1 = pib1 / populacao1;
    else pibcapita1 = 0;
    
    printf("Carta 1 cadastrada com sucesso! \n\n");
    
    printf("Cadastro da Carta 2: \n");
    printf("Estado: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    
    printf("Codigo: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &idcarta2);
    
    printf("Nome da Cidade: \n");
    fgets(nomecity2, sizeof(nomecity2), stdin);
    nomecity2[strcspn(nomecity2, "\n")] = 0;
    
    printf("Populacao: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &populacao2);
    
    printf("Area: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area2);
    
    printf("PIB: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib2);
    
    printf("Pontos Turisticos: \n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &pturistico2);
    
    if (area2 != 0) densidade2 = (float)populacao2 / area2;
    else densidade2 = 0;
    
    if (populacao2 != 0) pibcapita2 = pib2 / populacao2;
    else pibcapita2 = 0;
    
    printf("Carta 2 cadastrada com sucesso! \n\n");

    printf("A carta 1 é: \n");
    imprimirCarta(estado1, idcarta1, nomecity1, populacao1, area1, pib1, pturistico1, densidade1, pibcapita1);

    printf("\nA carta 2 é: \n");
    imprimirCarta(estado2, idcarta2, nomecity2, populacao2, area2, pib2, pturistico2, densidade2, pibcapita2);

    return 0;
}