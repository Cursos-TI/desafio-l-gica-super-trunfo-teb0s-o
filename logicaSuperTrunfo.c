#include <stdio.h>
#include <string.h>

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
  densidade_pop_2 = densidade_pop(populacao_2, area_2);

  // Registrar pib per capta
  pib_capta_2 = pib_capta(pib_2, populacao_2);

  // Registrar super poder
  super_poder_2 = super_poder(area_2, pib_2, pto_turisticos_2, populacao_2);

  // Exibir informações das cartas
  printf("\n\nCarta 1:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capta: %.2f reais\nSuper poder: %.2f\n",
  estado, codigo, nome, populacao, area, pib, pto_turisticos, densidade_pop_1, pib_capta_1, super_poder_1);

  printf("\n\nCarta 2:\nEstado: %c\nCódigo: %s\nNome: %s\nPopulação: %d habitantes\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nQuantidade de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capta: %.2f reais\nSuper poder: %.2f\n",
  estado_2, codigo_2, nome_2, populacao_2, area_2, pib_2, pto_turisticos_2, densidade_pop_2, pib_capta_2, super_poder_2);

  //Comparacoes:
  int opcao_1;
  int opcao_2;
  float atributo_1_c1;
  float atributo_1_c2;
  float atributo_2_c1;
  float atributo_2_c2;
  int comparacao;

  printf("\nSeleção de atributos:");

  printf("\n\nSelecione o primeiro atributo a ser comparado:\n1. População\n2. Área\n3. PIB\n4. Quantidade de pontos turísticos\n5. Densidade populacional\n6. PIB per capta\n7. Super poder\n");

  scanf("%d", &opcao_1);
  printf("\n");

  if (opcao_1 > 7) {
    printf("Insira uma opção valida\n");
    return 0;
  }
  if (opcao_1 < 1) {
    printf("Insira uma opção valida\n");
    return 0;
  }

  //Segundo atributo
  printf("Selecione o segundo atributo a ser comparado: \n");

  if (opcao_1 != 1) {
    printf("1. População\n");
  }
  if (opcao_1 != 2) {
    printf("2. Área\n");
  }
  if (opcao_1 != 3) {
    printf("3. PIB\n");
  }
  if (opcao_1 != 4) {
    printf("4. Quantidade de pontos turísticos\n");
  }
  if (opcao_1 != 5) {
    printf("5. Densidade Populacional\n");
  }
  if (opcao_1 != 6) {
    printf("6. PIB per capta\n");
  }
  if (opcao_1 != 7) {
    printf("7. Super poder\n");
  }
  else {
    printf("Insira um valor válido\n");
    return 0;
  }

  scanf("%d", &opcao_2);
  printf("\n");

  if (opcao_1 == opcao_2) {
    printf("O primeiro atributo a ser comparado não pode ser o mesmo que o segundo\n");
    return 0;
  }
  else if (opcao_2 > 7) {
    printf("Insira uma opção valida\n");
    return 0;
  }
  else if (opcao_2 < 1) {
    printf("Insira uma opção valida\n");
    return 0;
  }


  switch (opcao_1) {
    case 1:
      atributo_1_c1 = populacao;
      atributo_1_c2 = populacao_2;
      break;
    case 2:
      atributo_1_c1 = area;
      atributo_1_c2 = area_2;
      break;
    case 3:
      atributo_1_c1 = pib;
      atributo_1_c2 = pib_2;
      break;
    case 4:
      atributo_1_c1 = pto_turisticos;
      atributo_1_c2 = pto_turisticos_2;
      break;
    case 5:
      atributo_1_c1 = densidade_pop_1;
      atributo_1_c2 = densidade_pop_2;
      break;
    case 6:
      atributo_1_c1 = pib_capta_1;
      atributo_1_c2 = pib_capta_2;
      break;
    case 7: 
      atributo_1_c1 = super_poder_1;
      atributo_1_c2 = super_poder_2;
      break;
  }

  switch (opcao_2) {
    case 1:
      atributo_2_c1 = populacao;
      atributo_2_c2 = populacao_2;
      break;
    case 2:
      atributo_2_c1 = area;
      atributo_2_c2 = area_2;
      break;
    case 3:
      atributo_2_c1 = pib;
      atributo_2_c2 = pib_2;
      break;
    case 4:
      atributo_2_c1 = pto_turisticos;
      atributo_2_c2 = pto_turisticos_2;
      break;
    case 5:
      atributo_2_c1 = densidade_pop_1;
      atributo_2_c2 = densidade_pop_2;
      break;
    case 6:
      atributo_2_c1 = pib_capta_1;
      atributo_2_c2 = pib_capta_2;
      break;
    case 7: 
      atributo_2_c1 = super_poder_1;
      atributo_2_c2 = super_poder_2;
      break;
  }

  if (atributo_1_c1 + atributo_2_c2 == atributo_1_c2 + atributo_2_c2){
    printf("Empate!\n");
  }
  else if(opcao_1 == 5) {
    comparacao = atributo_2_c1 - atributo_1_c1 > atributo_2_c2 - atributo_1_c2 ? 1 : 2;
    printf("Carta %d venceu!\n", comparacao);
  }
  else if(opcao_2 == 5) {
    comparacao = atributo_1_c1 - atributo_2_c1 > atributo_1_c2 - atributo_2_c2 ? 1 : 2;
    printf("Carta %d venceu!\n", comparacao);
  }
  else {
    comparacao = atributo_1_c1 + atributo_2_c1 > atributo_1_c2 + atributo_2_c2 ? 1 : 2;
    printf("Carta %d venceu!\n", comparacao);
  }
  return 0;
}
