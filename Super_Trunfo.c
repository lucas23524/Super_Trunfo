#include <stdio.h>

typedef struct {
    char cartas;
    char estado;
    char codigodacarta[20];
    char nomedacidade[50];
    int populacao;
    float areaemkm2;
    float pib;
    int numerodepontosturisticos;
   
} Carta;

void lerCarta(Carta *c) {
    printf("digite a carta: \n");
    scanf(" %c", &c->cartas);

    printf("digite o estado: \n");
    scanf(" %c", &c->estado);

    printf("digite o codigo da carta: \n");
    scanf("%s", c->codigodacarta);

    printf("digite o nome da cidade: \n");
    scanf(" %[^\n]", c->nomedacidade);

    printf("digite a populacao: \n");
    scanf("%d", &c->populacao);

    printf("digite a area em km²: \n");
    scanf("%f", &c->areaemkm2);

    printf("digite o pib: \n");
    scanf("%f", &c->pib);

    printf("digite o numero de pontos turistico: \n");
    scanf("%d", &c->numerodepontosturisticos);
}

void exibirCarta(Carta c, int numero) {
    printf("\n--- Carta %d ---\n", numero);
    printf("Carta: %c\n", c.cartas);
    printf("Estado: %c\n", c.estado);
    printf("Código da carta: %s\n", c.codigodacarta);
    printf("Nome da cidade: %s\n", c.nomedacidade);
    printf("populacao: %d\n", c.populacao);
    printf("Área em km²: %.2f\n", c.areaemkm2);
    printf("PIB: %.2f\n", c.pib);
    printf("Número de pontos turísticos: %d\n", c.numerodepontosturisticos);
   
}

int main() {
    Carta carta1, carta2;

    printf("Preencha os dados da primeira carta:\n");
    lerCarta(&carta1);

    printf("\nPreencha os dados da segunda carta:\n");
    lerCarta(&carta2);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}