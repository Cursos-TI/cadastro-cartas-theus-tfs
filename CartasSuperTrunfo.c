#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta1_estado, carta2_estado;
  char carta1_codigo[4], carta2_codigo[4];
  char carta1_nomeCidade[16], carta2_nomeCidade[16];
  unsigned long int carta1_populacao, carta2_populacao;
  float carta1_area, carta2_area;
  float carta1_PIB, carta2_PIB;
  int carta1_numeroPontosTuristicos, carta2_numeroPontosTuristicos;
  float carta1_PIBPerCapita, carta2_PIBPerCapita;
  long double carta1_densidadePopulacional, carta2_densidadePopulacional;
  long double carta1_superPoder, carta2_superPoder;

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

  //calculando densidade populacional da carta 1
  carta1_densidadePopulacional = carta1_populacao / carta1_area;

  //calculando densidade populacional da carta 1
  carta1_PIBPerCapita = carta1_PIB / carta1_populacao;

  //calculando super poder da carta 1
  carta1_superPoder = carta1_populacao + carta1_area + carta1_PIB + carta1_PIBPerCapita + carta1_numeroPontosTuristicos + (carta1_densidadePopulacional * -1);

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

  //calculando densidade populacional da carta 2
  carta2_densidadePopulacional = carta2_populacao / carta2_area;

  //calculando densidade populacional da carta 2
  carta2_PIBPerCapita = carta2_PIB / carta2_populacao;

  //calculando super poder da carta 2
  carta2_superPoder = carta2_populacao + carta2_area + carta2_PIB + carta2_PIBPerCapita + carta2_numeroPontosTuristicos + (carta2_densidadePopulacional * -1);

  // Área para exibição dos dados da cidade

  //Imprimindo os dados da primeira carta
  printf("\n===Informações da primeira carta===\n\n");
  printf("Estado: %c\n", carta1_estado);
  printf("Codigo: %s\n", carta1_codigo);
  printf("Nome da cidade: %s\n", carta1_nomeCidade);
  printf("População: %d\n", carta1_populacao);
  printf("Área: %f Km^2\n", carta1_area);
  printf("PIB: R$ %f Bilhões\n", carta1_PIB);
  printf("Numero de pontos turisticos: %d\n", carta1_numeroPontosTuristicos);
  printf("Densidade populacional: %lf hab/km^2\n", carta1_densidadePopulacional);
  printf("PIB per Capita: R$ %f\n", carta1_PIBPerCapita);

  //Imprimindo os dados da segunda carta
  printf("\n===Informações da segunda carta===\n\n");
  printf("Estado: %c\n", carta2_estado);
  printf("Codigo: %s\n", carta2_codigo);
  printf("Nome da cidade: %s\n", carta2_nomeCidade);
  printf("População: %d\n", carta2_populacao);
  printf("Área: %f Km^2\n", carta2_area);
  printf("PIB: R$ %f Bilhões\n", carta2_PIB);
  printf("Numero de pontos turisticos: %d\n", carta2_numeroPontosTuristicos);
  printf("Densidade populacional: %lf hab/km^2\n", carta2_densidadePopulacional);
  printf("PIB per Capita: R$ %f\n", carta2_PIBPerCapita);

  //Comparando os atributos das cartas
  int attributoEscolhido;

  printf("\n===Comparação de Cartas===\n");
  printf("#escolha o atributo de comparação#\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Numero de pontos turisticos\n");
  printf("5. Densidade populacional\n");
  printf("6. PIB per capita\n");
  printf("7. Super poder\n");
  
  scanf("%d", &attributoEscolhido);
  
  switch (attributoEscolhido)
  {
    case 1: //pupulação
      printf("Attributo escolhido: POPULAÇÂO");
      
      if (carta1_populacao > carta2_populacao)
        printf("%s com %d venceu de %s com %d\n", carta1_nomeCidade, carta1_populacao, carta2_nomeCidade, carta2_populacao);
      else
        printf("%s com %d venceu de %s com %d\n", carta2_nomeCidade, carta2_populacao, carta1_nomeCidade, carta1_populacao);
      break;
    case 2: //Área
      printf("Attributo escolhido: ÁREA\n");

      if (carta1_area > carta2_area)
        printf("%s com %.2f venceu de %s com %.2f\n", carta1_nomeCidade, carta1_area, carta2_nomeCidade, carta2_area);
      else
        printf("%s com %.2f venceu de %s com %.2f\n", carta2_nomeCidade, carta2_area, carta1_nomeCidade, carta1_area);
      break;
    case 3: //PIB
      printf("Attributo escolhido: PIB\n");

      if (carta1_PIB > carta2_PIB)
        printf("%s com %.2f venceu de %s com %.2f\n", carta1_nomeCidade, carta1_PIB, carta2_nomeCidade, carta2_PIB);
      else
        printf("%s com %.2f venceu de %s com %.2f\n", carta2_nomeCidade, carta2_PIB, carta1_nomeCidade, carta1_PIB);
      break;
    case 4: //Numero de pontos turisticos
      printf("Attributo escolhido: NUMERO DE PONTOS TURISTICOS\n");

      if (carta1_numeroPontosTuristicos > carta2_numeroPontosTuristicos)
        printf("%s com %d venceu de %s com %d\n", carta1_nomeCidade, carta1_numeroPontosTuristicos, carta2_nomeCidade, carta2_numeroPontosTuristicos);
      else
        printf("%s com %d venceu de %s com %d\n", carta2_nomeCidade, carta2_numeroPontosTuristicos, carta1_nomeCidade, carta1_numeroPontosTuristicos);
      break;
    case 5: //Densidade populacional
      printf("Attributo escolhido: DENSIDADE POPULACIONAL\n");
      
      if (carta1_densidadePopulacional < carta2_densidadePopulacional)
        printf("%s com %.2lf venceu de %s com %.2lf\n", carta1_nomeCidade, carta1_densidadePopulacional, carta2_nomeCidade, carta2_densidadePopulacional);
      else
        printf("%s com %.2lf venceu de %s com %.2lf\n", carta2_nomeCidade, carta2_densidadePopulacional, carta1_nomeCidade, carta1_densidadePopulacional);
      break;
    case 6: //PIB per capita
      printf("Attributo escolhido: PIB PER CAPITA\n");
      
      if (carta1_PIBPerCapita > carta2_PIBPerCapita)
        printf("%s com %.2f venceu de %s com %.2f\n", carta1_nomeCidade, carta1_PIBPerCapita, carta2_nomeCidade, carta2_PIBPerCapita);
      else
        printf("%s com %.2f venceu de %s com %.2f\n", carta2_nomeCidade, carta2_PIBPerCapita, carta1_nomeCidade, carta1_PIBPerCapita);
      break;
    case 7: //Super poder
      printf("Attributo escolhido: SUPER PODER\n");

      if (carta1_superPoder > carta2_superPoder)
        printf("%s com %.2lf venceu de %s com %.2lf\n", carta1_nomeCidade, carta1_superPoder, carta2_nomeCidade, carta2_superPoder);
      else
        printf("%s com %.2lf venceu de %s com %.2lf\n", carta2_nomeCidade, carta2_superPoder, carta1_nomeCidade, carta1_superPoder);
    break;
    
    default:
      printf("Opção invalida!\n");
    break;
  }
  
  return 0;
} 
