#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta2_estado;
  char carta1_codigo[4], carta2_codigo[4];
  char carta1_nomeCidade[16], carta2_nomeCidade[16];
  int carta1_populacao, carta2_populacao;
  float carta1_area, carta2_area;
  float carta1_PIB, carta2_PIB;
  int carta1_numeroPontosTuristicos, carta2_numeroPontosTuristicos;
  // Área para entrada de dados

  //Coletando os dados da primeira carta
  printf("====Insira os dados da primeira carta====\n");

  printf("Estado (A - H): ");
  scanf(" %c", &carta1_estado);

  printf("codigo (01 - 04) + Estado: ");
  scanf("%s", carta1_codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", carta1_nomeCidade);

  printf("População: ");
  scanf("%d", &carta1_populacao);

  printf("Área da cidade (Km^2): ");
  scanf("%f", &carta1_area);

  printf("PIB (Bilhão R$): ");
  scanf("%f", &carta1_PIB);
  
  printf("Numero de pontos turisticos: ");
  scanf("%d", &carta1_numeroPontosTuristicos);

  //Coletando os dados da segunda carta
  printf("\n===Insira os dados da segunda carta====\n");

  printf("Estado (A - H): ");
  scanf(" %c", &carta2_estado);

  printf("codigo (01 - 04) + Estado: ");
  scanf("%s", carta2_codigo);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", carta2_nomeCidade);

  printf("População: ");
  scanf("%d", &carta2_populacao);

  printf("Área da cidade (Km^2): ");
  scanf("%f", &carta2_area);

  printf("PIB (Bilhão R$): ");
  scanf("%f", &carta2_PIB);
  
  printf("Numero de pontos turisticos: ");
  scanf("%d", &carta2_numeroPontosTuristicos);
  // Área para exibição dos dados da cidade

  //Imprimindo os dados da segunda carta
  printf("\n===Informações da primeira carta===\n\n");
  printf("Estado: %c\n", carta1_estado);
  printf("Codigo: %s\n", carta1_codigo);
  printf("Nome da cidade: %s\n", carta1_nomeCidade);
  printf("População: %d\n", carta1_populacao);
  printf("Área: %f Km^2\n", carta1_area);
  printf("PIB: R$ %f Bilhões\n", carta1_PIB);
  printf("Numero de pontos turisticos: %d\n", carta1_numeroPontosTuristicos);
  printf("Densidade populacional: %f hab/km^2\n", (float) carta1_populacao / carta1_area);
  printf("PIB per Capita: R$ %f\n", carta1_PIB / (float) carta1_populacao);

  //Imprimindo os dados da segunda carta
  printf("\n===Informações da segunda carta===\n\n");
  printf("Estado: %c\n", carta2_estado);
  printf("Codigo: %s\n", carta2_codigo);
  printf("Nome da cidade: %s\n", carta2_nomeCidade);
  printf("População: %d\n", carta2_populacao);
  printf("Área: %f Km^2\n", carta2_area);
  printf("PIB: R$ %f Bilhões\n", carta2_PIB);
  printf("Numero de pontos turisticos: %d\n\n", carta2_numeroPontosTuristicos);
  printf("Densidade populacional: %f hab/km^2\n", (float) carta2_populacao / carta2_area);
  printf("PIB per Capita: R$ %f\n", carta2_PIB / (float) carta2_populacao);

  return 0;
} 
