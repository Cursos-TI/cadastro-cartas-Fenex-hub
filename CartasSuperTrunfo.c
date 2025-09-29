#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main()
{ 
  // Variáveis das cartas 1 e 2:
  char estado[50], Estado[50];
  char codigoCarta[30], CodigoCarta[30];
  char nomeCidade[50], NomeCidade[50];
  unsigned long int populacao, Populacao;
  float area, Area;
  float pib, Pib;
  int pontosTuristicos, PontosTuristicos;

  // Solicitando dados das cartas 1 e 2.

 // Carta 1:
  printf("*** Digite os dados da carta 1! ***\n");

  printf("Digite o estado:\n");
  scanf("%s", estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", codigoCarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", nomeCidade);

  printf("Digite o numero da populacao:\n");
  scanf("%u", &populacao);

  printf("Digite a area em km2:\n");
  scanf("%f", &area);

  printf("Digite o PIB:\n");
  scanf("%f", &pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosTuristicos);

  float PibPerCapitaCarta1 = pib / populacao;
  float DencidadePopulacionalCarta1 = area / populacao;
  float superPoderCarta1 = populacao + area + pib + pontosTuristicos +  DencidadePopulacionalCarta1;
  float atributoCarta1 = populacao + area + pib + pontosTuristicos +  DencidadePopulacionalCarta1;

 
  // Carta 2:

  printf("***Digite os dados da carta 2!***\n");

  printf("Digite o estado:\n");
  scanf("%s", Estado);

  printf("Digite o codigo da carta:\n");
  scanf("%s", CodigoCarta);

  printf("Digite o nome da cidade:\n");
  scanf("%s", NomeCidade);

  printf("Digite o numero da populacao:\n");
  scanf("%u", &Populacao);

  printf("Digite a area em km2:\n");
  scanf("%f", &Area);

  printf("Digite o PIB:\n");
  scanf("%f", &Pib);

  printf("Digite o numero de pontos turisticos:\n");
  scanf("%d", &PontosTuristicos);

  float PibPerCapitaCarta2 = Pib / Populacao;
  float DencidadePopulacionalCarta2 = Area / Populacao;
  float superPoderCarta2 = Populacao + Area + Pib + PontosTuristicos + DencidadePopulacionalCarta2;
  float atributoCarta2 = Populacao + Area + Pib + PontosTuristicos +  DencidadePopulacionalCarta2;




  // Exibindo os dados das cartas.
  //Carta 1

  printf("\n");
  printf("*** Carta 1 ***\n");
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("Numero da populacao: %u\n", populacao);
  printf("Tamanho da area: %.4f Km2\n", area);
  printf("PIB: RS %f\n", pib);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
  printf("Dencidade populacional: %f por Km2\n", DencidadePopulacionalCarta1);
  printf("Pib per capita: RS %f\n", PibPerCapitaCarta1);  
  printf("Soma dos dados numericos da carta 1:%f\n", atributoCarta1);
  printf("Super poder da carta 1: %f\n", -DencidadePopulacionalCarta1);

  // Carta 2
  printf("\n");
  printf("*** Carta 2: ***\n");
  printf("Estado: %s\n", Estado);
  printf("Codigo da carta: %s\n", CodigoCarta);
  printf("Nome da cidade: %s\n", NomeCidade);
  printf("Numero da populacao: %.2u\n", Populacao);
  printf("Tamanho da area: %.2f\n", Area);
  printf("PIB: RS %.2f\n", Pib);
  printf("Numero de pontos turisticos: %d\n", pontosTuristicos);
  printf("Dencidade populacional: %.2f\n", DencidadePopulacionalCarta2);
  printf("Pib per capita: RS %.2f\n", PibPerCapitaCarta2);  
  printf("Soma dos dados numericos da carta 2:%f\n", atributoCarta2);
  printf("Super poder da carta 2: %f\n", -DencidadePopulacionalCarta2);


  // Comparando as cartas
  printf("Carta 1 vence! %d\n", atributoCarta1 > atributoCarta2);
  printf("Carta 1 perde! %d\n", atributoCarta1 < atributoCarta2);
  
  return 0;
} 
