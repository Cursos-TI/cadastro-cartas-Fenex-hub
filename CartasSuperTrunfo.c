#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Carta 1:
  char estado[50];
  char codigocarta[50];
  char nomecidade[50];
  int populacao;
  float area;
  float pib;
  int pontosturisticos;

  //Carta 2:
  char Estado[50];
  char CodigoCarta[50];
  char NomeCidade[50];
  int Populacao;
  float Area;
  float Pib;
  int PontosTuristicos;

  // Área para entrada de dados

  // Carta 1:
  printf("Digite os dados da primeira carta!\n");

  printf("Digite o estado:\n");
  scanf("%s", &estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", &codigocarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", &nomecidade);

  printf("Digite o numero da populacao:\n");
  scanf("%d", &populacao);

  printf("Digite a area em quilometros:\n");
  scanf("%f", &area);

  printf("Digite o PIB:\n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos);

  // Carta 2:

  printf("Agora digite os dados da segunda carta!\n");

  printf("Digite o estado:\n");
  scanf("%s", &Estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", &CodigoCarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", &NomeCidade);

  printf("Digite o numero da populacao:\n");
  scanf("%d", &Populacao);

  printf("Digite a area em quilometros:\n");
  scanf("%f", &Area);

  printf("Digite o PIB:\n");
  scanf("%f", &Pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &PontosTuristicos);

  // Área para exibição dos dados

  //Carta 1

  printf("Carta 1:\n");

  printf("Estado: %s\n", estado);

  printf("Codigo da carta: %s\n", codigocarta);
  
  printf("Nome da cidade: %s\n", nomecidade);
  
  printf("Numero da populacao: %d\n", populacao);
  
  printf("Tamanho da area: %f\n", area);
  
  printf("PIB: %f\n", pib);
  
  printf("Numero de pontos turisticos: %d\n", pontosturisticos);

  // Carta 2:

  printf("Carta 2:\n");

  printf("Estado: %s\n", Estado);

  printf("Codigo da carta: %s\n", CodigoCarta);
  
  printf("Nome da cidade: %s\n", NomeCidade);
  
  printf("Numero da populacao: %d\n", Populacao);
  
  printf("Tamanho da area: %f\n", Area);
  
  printf("PIB: %f\n", Pib);
  
  printf("Numero de pontos turisticos: %d\n", PontosTuristicos);


  return 0;
} 
