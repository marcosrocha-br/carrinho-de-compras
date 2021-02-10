//Agoritmo de um carrinho de compras que tem capacidade para guardar 200 ítens utilizando uma estrutura que possui:
//NOME DO ITEM, PREÇO e QUANTIDADE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    float preco;
    int quant;
} produto; //Estrutura 'produto'

int main(){

    produto p[200]; //Cada ítem com a estrutura 'produto' é guardado dentro de um vetor p com 200 índices
    float total;
    char sair;
    int x;

    printf("\t\tCarrinho de compras\n\n");

    for( x = 0; x < 200; x++){
        printf("Nome: ");
        scanf(" %s", p[x].nome);

        printf("Preco: ");
        scanf(" %f", &p[x].preco);

        printf("Quantidade: ");
        scanf(" %d", &p[x].quant);

        total = total + p[x].preco * p[x].quant;

		//Antes de ler a estrutura do próximo ítem, coloquei a opção de 
		//poder interromper o laço e finalizar o programa, caso necessário
		
        printf("Deseja sair S/N? "); 
        scanf(" %c", &sair);		

        printf("\n");
        
        if(sair == 's' || sair == 'S')
        	break;
    } 

    printf("\n\t\tTotal = R$ %.2f", total);

	printf("\n\n");
    system("pause");
    return 0;
}
