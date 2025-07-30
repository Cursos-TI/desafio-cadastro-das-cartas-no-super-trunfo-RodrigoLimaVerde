#include <stdio.h>
#include <string.h>

int main() {

    int carta = 1;
    char CodigoCarta[50] = "A";
    char estado[100] = "Ceara";
    char cidade[100] = "Fortaleza";
    int populacao = 200000;
    float area = 50.000;
    float pib = 30.000;
    int pontosTuristicos = 50;

    int carta02 = 2;
    char CodigoCarta02[50] = "B";
    char estado02[100] = "São Paulo";
    char cidade02[100] = "São Paulo";
    int populacao02 = 12325000;
    float area02 = 1521.11;
    float pib02 = 699.28;
    int pontosTuristicos02 = 50;

    // Saída
    printf("\n=== Dados Digitados ===\n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", CodigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área do território: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    // Saída
    printf("\n=== Dados Digitados ===\n");
    printf("Número da carta: %d\n", carta02);
    printf("Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", CodigoCarta02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Área do território: %.2f\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontosTuristicos02);

    return 0;
}
   

