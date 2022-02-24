#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int conteudo;
	struct no *esquerda, *direita;
}No;

typedef struct;
    No raiz;
}ArvB;

void inserirEsquerda(No *no, int valor) {
	if(no -> esquerda == NULL) {
	No *novo = (No*) malloc(sizeof(No));
	novo -> conteudo = valor;
	novo -> esquerda = NULL;
	novo -> direita = NULL;
	no -> esquerda = novo;
	}else {
		if(valor < no -> esquerda -> conteudo) {
			inserirEsquerda(no -> esquerda, valor)
		}else{
			inserirDireita(no -> esquerda, valor)
		}
}

void inserirDireita(No *no, int valor) {
	if (no -> direita == NULL)
    No *novo = (No*) malloc(sizeof(No));
	novo -> conteudo = valor;
	novo -> esquerda = NULL;
	novo -> direita = NULL;
	no -> direita = novo;
	}else {
		if (valor < no -> direita -> conteudo) {
			inserirDireita(no -> direita, valor)
		}else {
			inserirEsquerda(no -> direita, valor)
		}
}

void inserir(ArvB *arv, int valor) {
	if (arv -> raiz == NULL {
	No *novo = (No*) malloc(sizeof(No));
	novo -> conteudo = valor;
	novo -> esquerda = NULL;
	novo -> direita = NULL;
	arv -> raiz = novo;
	
	   // Linha de racioc�nuio para impress�o de valores da �rvore.
void imprimir(No *raiz) {
	if (raiz != NULL) {
		printf("%d", raiz -> conteudo);
		imprimir(raiz -> esquerda);
		imprimir(raiz -> direita);
	}else {                                       // Descobrir que minha raiz n�o � nula! Ent�o, inserimos valores dentro da mesma raiz. Maiores exemplos acima.
    if (valor < arv -> raiz -> conteudo) {
    	inserirEsquerda(arv -> raiz, valor);
	}
	}
	
int main() {
	int op, valor;
	ArvB, arv;   // arv n�o � um ponteiro, � um objeto!! Assim como o op e o valor.
	arv.raiz = NULL;   // ArvB significa �rvore bin�ria.
	
	do {
	printf("\n0 - Op��o de sair\n1 - Op��o de inserir\n2 - Op��o de imprimir\n");
	scanf("%d", &op);
	
	switch (op) {
		case 0:
			printf("\nSaindo...\n");
			break;
		case 1:
			printf("Digite um valor: ");
			scanf("%d", &valor);
			inserir(&arv, valor);
			break;
		case 2:
			printf("\nImpress�o da minha �rvore bin�ria:\n");
			imprimir(arv.raiz);
			break;
		default:
			printf("\nOp��o inv�lida...\n");
	}
}while(op != 0);
	
			
// Terminou-se a parte de inser��o de elementos em uma �rvore bin�ria com RECURS�O E N�O-RECURS�O.

/* Neste conte�do de �rvores bin�rias; na 3� quest�o eu tratei essa estrutura de dados din�mica que
s�o extremamente eficientes para busca, utilizando recursividade e n�o recursividade. */


