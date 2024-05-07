#include <stdio.h>
#include <malloc.h>

struct NO{
	char valor;
	NO* prox;
};

struct Lista{
	NO* primeiro;
};

//inicializando a lista
Lista* inicializar(){
	Lista* lista = (Lista)* malloc(sizeof(Lista));
	if(lista == NULL){
		print("Erro ao alocar memoria!\n");		
	}else{
		lista ->primeiro = NULL;
	}
	return lista
}

//inserindo valores na começo da lista
void inserirInicio(Lista* lista, char dado){
	NO* novoNO = (NO*)malloc(sizeof(NO));
	if(novoNO == NULL){
		printf("Erro de alocacao de memoria!\n");
	}else{
		novoNO->valor = dado;
		if(lista->primeiro==NULL){
			novoNO->prox = NULL;
			lista->primeiro = novoNO;
					
		}else{
			novoNO->prox = lista->primeiro;
			lista->primeiro = novoNO;			
		}
	}
}


//inserir qualquer novo elemento no final da lista
void inserirFim(Lista* lista, char dado){
	NO* novoNO = (NO*) malloc(sizeof(NO));
	if (novoNo == NULL){
		printf("Erro de alocacao de memoria!\n");
	}else{
		novoNo->valor = dado;
		novo->prox = NULL;
		if(lista->primeiro == NULL){
			lista->primeiro = novoNO;
		}else{
			NO* aux = lista->primeiro;
			while(aux->prox != NULL){
				aux = aux->prox;
			}
			aux->prox = novoNO;
		}
	}
}

//Inserindo elemento no meio verificndo o fim, inicio e se está vazia
void inserirMeio(Lista* lista, char dado, char ant){
	NO* novoNO = (NO*) malloc(sizeof(NO));
	if (novoNO == NULL){
		printf("Erro ao alocar memoria!\n");
	}else{
		novoNO->valor = dado;
		if(lista->primeiro == NULL){
			novoNO->prox = NULL;
			lista->primeiro = novoNO;
		}else{
			NO* aux = lista->primeiro;
			while(aux->dados != ant && aux ->prox != NULL){
				aux = aux->prox;
			}
			novoNO->prox = aux->prox;
			aux->prox = novoNO;
		}
		
	}
}

void inserirOrdenado(Lista* lista, char dado){
	NO* novoNO = (NO*)malloc(sizeof(NO));
	if(novoNO == NULL){
		printf("Erro ao alocar memoria!\n"):
	}else{
		novoNO->valor = dado;
		if(lista->primeiro == NULL){
			novoNo->prox = NULL;
			lista->primeiro = novoNO;
		}else{
			NO* ant, atual = lista->primeiro;
			while(atual->valor > novoNO->valor && atual->prox != NULL){
				nt = atual;
				atual = atual->prox;
			}
		}
	}
}

























