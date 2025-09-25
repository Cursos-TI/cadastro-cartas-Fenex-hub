#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis das cartas 1 e 2:
  char estado[50], Estado[50];
  char codigocarta[30], CodigoCarta[30];
  char nomecidade[50], NomeCidade[50];
  float populacao, Populacao;
  float area, Area;
  float pib, Pib;
  int pontosturisticos, PontosTuristicos;
  float populacao1, populacao2;
  float area1, area2;

  // Área para entrada de dados

  // Carta 1:
  printf("Digite os dados da primeira carta!\n");

  printf("Digite o estado:\n");
  scanf("%s", estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", codigocarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", nomecidade);

  printf("Digite o numero da populacao:\n");
  scanf("%f", &populacao);

  printf("Digite a area em km2:\n");
  scanf("%f", &area);

  printf("Digite o PIB:\n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos);

  
  populacao1 = populacao / area;
  area1 = pib / populacao;


  // Carta 2:

  printf("Agora digite os dados da segunda carta!\n");

  printf("Digite o estado:\n");
  scanf("%s", Estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", CodigoCarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", NomeCidade);

  printf("Digite o numero da populacao:\n");
  scanf("%f", &Populacao);

  printf("Digite a area em km2:\n");
  scanf("%f", &Area);

  printf("Digite o PIB:\n");
  scanf("%f", &Pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &PontosTuristicos);

  
  populacao2 = Populacao / Area;
  area2 = Pib / Populacao;


  // Área para exibição dos dados

  //Carta 1

  printf("Carta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codigocarta);
  printf("Nome da cidade: %s\n", nomecidade);
  printf("Numero da populacao: %.2f\n", populacao);
  printf("Tamanho da area: %.2f\n", area);
  printf("PIB: %f\n", &pib);
  printf("Numero de pontos turisticos: %d\n", pontosturisticos);
  printf("Dencidade populacional: %.2f\n", populacao1);
  printf("Pib per capita: %.2f\n\n", area1);  

  // Carta 2:

  printf("Carta 2:\n");
  printf("Estado: %s\n", Estado);
  printf("Codigo da carta: %s\n", CodigoCarta);
  printf("Nome da cidade: %s\n", NomeCidade);
  printf("Numero da populacao: %.2f\n", Populacao);
  printf("Tamanho da area: %.2f\n", Area);  
  printf("PIB: %.2f\n", Pib);
  printf("Numero de pontos turisticos: %d\n", PontosTuristicos);

  printf("Dencidade populacional: %.2f\n", populacao2);
  printf("Pib per capita: %.2f\n\n", area2);

  return 0;
} 
