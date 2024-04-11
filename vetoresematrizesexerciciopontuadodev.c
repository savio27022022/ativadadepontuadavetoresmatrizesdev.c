#include<stdio.h>
#include<locale.h>
int main() {
//Integrantes da Equipe:Sávio Santos e Paulo Henrique.
setlocale(LC_ALL,"");
  // Declaração das variáveis
  char disciplinas[3][50];
  float notas[3][3];
  float pesos[3][3];
  float mediaPonderada[3];

  // Entrada dos dados
  for (int i = 0; i < 3; i++) {
    printf("Nome da disciplina: ",i+1);
    scanf("%s",&disciplinas[i]);
    fflush(stdin);
    for (int j = 0; j < 3; j++) {
      printf("%dº nota: ", j + 1);
      scanf(" %f", &notas[i][j]);
    fflush(stdin);
    
      printf("Peso da %dº nota: ", j + 1);
      scanf(" %f", &pesos[i][j]);
    fflush(stdin);
    }
  }

  // Cálculo das médias
  for (int i = 0; i < 3; i++) {
    mediaPonderada[i] = 0;
    for (int j = 0; j < 3; j++) {
      mediaPonderada[i] += notas[i][j] * pesos[i][j];
    }
    mediaPonderada[i] /= (pesos[i][0] + pesos[i][1] + pesos[i][2]);
  }

  // Saída dos resultados
  for (int i = 0; i < 3; i++) {
    printf("\nDisciplina: %s\n", disciplinas[i]);
    for (int j = 0; j < 3; j++) {
      printf("%dª nota: %.1f (peso %.1f)\n", j + 1, notas[i][j], pesos[i][j]);
    }
    printf("A Média ponderada é: %.1f\n", mediaPonderada[i]);
  }

  return 0;
}
