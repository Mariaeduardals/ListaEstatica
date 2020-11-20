#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {

int n = 5;

Lista *li = create(n);

	add(li, 1);
	add(li, 2);
	add(li, 3);
	add(li, 4);
	add(li, 5);
	
	
	printf("Quantidade de elementos: %d \n", size(li));
	
	printf("",mostra(li));

	printf("Retorna o indice se o valor for encontrado, -1 caso oposto: %d \n", find(li, 3));

	printf("Retorna 1 se foi feito a remocao e 0 se não foi removido: %d \n", remover(li, 3));

	printf("Quantidade de elementos: %d \n", size(li));

	printf("", mostra(li));

	printf("Retorna 1 se a ListaEstatica está cheia e 0 para o caso oposto: %d\n", isFull(li));
	
	printf("Retorna 1 se a ListaEstatica está vazia e 0 para o caso oposto: %d\n", isEmpty(li));
	
	printf("Remove todos os elementos da ListaEstatica : %d\n", clear(li));
	
	printf("Quantidade de elementos: %d \n", size(li));












	return 1;
}
