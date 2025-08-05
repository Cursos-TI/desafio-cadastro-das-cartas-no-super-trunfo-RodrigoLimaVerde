#include <stdio.h>
#include <string.h>

int main() {

    int carta = 1;
    char CodigoCarta[50] = "A";
    char cidade[100] = "São Paulo";
    char estado[100] = "São Paulo";
    float populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int pontosTuristicos = 50;
    
    
    float DenPopulacional = populacao / area;
    float PibPerCap = pib / populacao;
    



    int carta02 = 2;
    char CodigoCarta02[50] = "B";
    char cidade02[100] = "Rio de Janeiro";
    char estado02[100] = "Rio de Janeiro";
    float populacao02 = 6748000;
    float area02 = 1200.25;
    float pib02 = 300.50;
    int pontosTuristicos02 = 30;
    
    float DenPopulacional02 = populacao02 / area02;
    float PibPerCap02 = pib02 / populacao02;



    // Saída
    printf("\n=== Dados Digitados ===\n");
    printf("Número da carta: %d\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", CodigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área do território: %.7f\n", area);
    printf("PIB: %.7f\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.6f\n", DenPopulacional);
    printf("PIB Per Capita: %.7f\n", PibPerCap);

    // Saída
    printf("\n=== Dados Digitados ===\n");
    printf("Número da carta: %d\n", carta02);
    printf("Estado: %s\n", estado02);
    printf("Código da Carta: %s\n", CodigoCarta02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %f\n", populacao02);
    printf("Área do território: %.7f\n", area02);
    printf("PIB: %.7f\n", pib02);
    printf("Pontos turísticos: %d\n", pontosTuristicos02);
    printf("Densidade Populacional: %.6f\n", DenPopulacional02);
    printf("PIB Per Capita: %.7f\n", PibPerCap02);

    return 0;
}
   

