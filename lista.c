#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
	int max;
	int contador;
	int *valor;
};

typedef struct lista Lista;

Lista* create(int n){

	Lista *li = (Lista*) malloc (sizeof(Lista));
	
	if(li == NULL){
		return NULL;
	}else{	
		li->valor = (int*) malloc(n* sizeof(int));
		li->max = n;
		li->contador = 0;
		return li;  
	}

}
int add(Lista *li, int e){
	
	if(li != NULL && li->contador < li->max){
	
	li->valor[li->contador] = e;
	
	li->contador++;
		
		return 1;
	}else{
		return 0;
	}
}

int remover(Lista *li, int m){
	int i;
	
	if(li != NULL){
	
	for(i = 0; i < li->contador; i++){
		
		if(li->valor[i] == m){
			
			int *novoVet = (int*) malloc(li->max *sizeof(int));
			
			int  j;
			int k = 0;
			for(j = 0; j < li->max; j++){
				if(m != li->valor[j]){
					novoVet[k] = li->valor[j];
					k++;
				}
			}	
			li->contador--;
			free(li->valor);
			li->valor = novoVet;
		}
	}
			return 1;
		}else{
			return 0;
		}
}

int size(Lista *li){
	int i;
	if(li->contador <= li->max)
		return li->contador;	
	
}

int find(Lista *li, int e){
	int i ;
		
		if(li != NULL){
		for(i = 0; i < li->contador; i++){	
			if(e == li->valor[i]){
				return i;	
			}
		}
		}return -1;

}
int mostra(Lista *li){
	int i;
	for(i = 0; i < li->contador; i++){	
	printf("[%d] -> %d\n", i ,li->valor[i]);
}
}

int isFull(Lista *li){
	
	if (li->contador <= li->max-1 ){
		return 1;
	}else{
	return 0;
	}
}

int isEmpty(Lista *li){
	if( li == NULL ){
		return 1;
	}
	if(li->contador <= 0){
	return 1;
	}else{
		return 0;
	}
	
}

int clear(Lista *li){
	
	if(li != NULL){
		free(li->valor);
		free(li);
		return 1;
	}else{
		return 0;
	}
}









