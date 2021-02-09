#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quant;
} produto;

int main(){

    produto p[200];
    float total;
    int x = 0;
    char sair;

    printf("\t\tCarrinho de compras\n\n");

    do{
        printf("Nome: ");
        scanf(" %s", p[x].nome);

        printf("Preco: ");
        scanf(" %f", &p[x].preco);

        printf("Quantidade: ");
        scanf(" %d", &p[x].quant);

        total = total + p[x].preco * p[x].quant;

        printf("Deseja sair S/N? ");
        scanf(" %c", &sair);

        printf("\n");

        x++;

    } while (sair != 's' && 'S');

    printf("\n\t\tTotal = R$ %.2f", total);

    system("pause");
    return 0;
}
