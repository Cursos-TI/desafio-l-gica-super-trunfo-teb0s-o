#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

float densidade_pop(unsigned long int populacao, float area){
  return populacao / area;
}

float pib_capta(float pib , unsigned long int populacao){
  return pib / populacao;
}

float super_poder(float area, float pib, int pto_turisticos, unsigned long int populacao){
  return area + pib + pto_turisticos + populacao + pib_capta(pib, populacao) - densidade_pop(populacao, area);
}

int main() {
  // Registrar primeira carta
  char estado[2], codigo[4], nome[50];
  float area, pib, densidade_pop_1, pib_capta_1, super_poder_1;
  int pto_turisticos;
  unsigned long int populacao;
  
  printf("Registrar Carta 1:\n\n");

  // Registrar a letra do estado da cidade
  printf("Digite a letra do estado da cidade: ");
  scanf("%1s", estado);

  // Registrar o código da cidade
  printf("Digite o código da cidade: ");
  scanf("%3s", codigo);

  // Registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  getchar();
  fgets(nome, sizeof(nome), stdin);
  nome[strlen(nome)-1] = '\0';

  // Registrar o número da população da cidade
  printf("Digite o número da população da cidade: ");
  scanf("%d", &populacao);

  // Registrar a área da cidade
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area);

  // Registrar o PIB da cidade
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  // Registrar a quantidade de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pto_turisticos);

  // Registrar a densidade populacional
  densidade_pop_1 = densidade_pop(populacao, area);

  // Registrar pib per capta
  pib_capta_1 = pib_capta(pib, populacao);

  // Registrar super poder
  super_poder_1 = super_poder(area, pib, pto_turisticos, populacao);

  // Registrar segunda carta
  char estado_2, codigo_2[4], nome_2[50];
  float area_2, pib_2, densidade_pop_2, pib_capta_2, super_poder_2;
  int pto_turisticos_2;
  unsigned long int populacao_2;

  printf("\n\nRegistrar Carta 2:\n\n");

  // Registrar a letra do estado da cidade
  printf("Digite a letra do estado da cidade: ");
  getchar();
  scanf("%c", &estado_2);

  // Registrar o código da cidade
  printf("Digite o código da cidade: ");
  scanf("%3s", codigo_2);

  // Registrar o nome da cidade
  printf("Digite o nome da cidade: ");
  getchar();
  fgets(nome_2, sizeof(nome_2), stdin);
  nome_2[strlen(nome_2)-1] = '\0';

  // Registrar o número da população da cidade
  printf("Digite o número da população da cidade: ");
  scanf("%d", &populacao_2);

  // Registrar a área da cidade
  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area_2);

  // Registrar o PIB da cidade
  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib_2);

  // Registrar a quantidade de pontos turísticos da cidade
  printf("Digite o número de pontos turísticos presentes na cidade: ");
  scanf("%d", &pto_turisticos_2);

  // Registrar a densidade populacional
  densidade_pop_2 = densidade_pop(populacao, area_2);

  // Registrar pib per capta
  pib_capta_2 = pib_capta(pib_2, populacao_2);

  // Registrar super poder
  super_poder_2 = super_poder(area_2, pib_2, pto_turisticos_2, populacao_2);

  // Exibir informações das cartas
  printf("\n\nCarta 1:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capta: %.2f reais\nSuper poder: %.2f\n",
  estado, codigo, nome, populacao, area, pib, pto_turisticos, densidade_pop_1, pib_capta_1, super_poder_1);

  printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPib per capta: %.2f reais\nSuper poder: %.2f\n",
  estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, pto_turisticos_2, densidade_pop_2, pib_capta_2, super_poder_2);

  //Comparacoes:

  //populacao
  printf("populacao:\n");
  if (populacao == populacao_2) {
    printf("As cartas empataram\n");
  }
  else if (populacao > populacao_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (populacao < populacao_2) {
    printf("Carta 2 Venceu\n");
  }

  //area
  printf("Área:\n");
  if (area == area_2) {
    printf("As cartas empataram\n");
  }
  else if (area > area_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (area < area_2) {
    printf("Carta 2 Venceu\n");
  }

  //pib
  printf("PIB:\n");
  if (pib == pib_2) {
    printf("As cartas empataram\n");
  }
  else if (pib > pib_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (pib < pib_2) {
    printf("Carta 2 Venceu\n");
  }

  //pontos turisticos
  printf("Quantidade de pontos Turísticos:\n");
  if (pto_turisticos == pto_turisticos_2) {
    printf("As cartas empataram\n");
  }
  else if (pto_turisticos > pto_turisticos_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (pto_turisticos < pto_turisticos_2) {
    printf("Carta 2 Venceu\n");
  }

  //densidade populacional
  printf("Densidade populacional:\n");
  if (densidade_pop_1 == densidade_pop_2) {
    printf("As cartas empataram\n");
  }
  else if (densidade_pop_1 < densidade_pop_2 ) {
    printf("Carta 1 Venceu\n");
  }
  else if (densidade_pop_1 > densidade_pop_2) {
    printf("Carta 2 Venceu\n");
  }

  //pib per capta
  printf("PIB per capta:\n");
  if (pib_capta_1 == pib_capta_2) {
    printf("As cartas empataram\n");
  }
  else if (pib_capta_1 == pib_capta_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (pib_capta_1 == pib_capta_2) {
    printf("Carta 2 Venceu\n");
  }

  //super poder
  printf("Super poder:\n");
  if (super_poder_1 == super_poder_2) {
    printf("As cartas empataram\n");
  }
  else if (super_poder_1 == super_poder_2) {
    printf("Carta 1 Venceu\n");
  }
  else if (super_poder_1 == super_poder_2) {
    printf("Carta 2 Venceu\n");
  }

  return 0;
}
