#include <stdio.h>

int main() {
    int codigo, populacao, pontos_turisticos;
    float area, pib;
    char nome[50];
    
      printf("Cadastro de Cidade\n");
    
    printf("Digite o numero da cidade: ");
    scanf("%d", &codigo);
    
     printf("Digite o nome da cidade: ");
    scanf(" %d", nome);

      printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos);
    
    return 0;
}

