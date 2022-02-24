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
	
	   // Linha de raciocínuio para impressão de valores da árvore.
void imprimir(No *raiz) {
	if (raiz != NULL) {
		printf("%d", raiz -> conteudo);
		imprimir(raiz -> esquerda);
		imprimir(raiz -> direita);
	}else {                                       // Descobrir que minha raiz não é nula! Então, inserimos valores dentro da mesma raiz. Maiores exemplos acima.
    if (valor < arv -> raiz -> conteudo) {
    	inserirEsquerda(arv -> raiz, valor);
	}
	}
	
int main() {
	int op, valor;
	ArvB, arv;   // arv não é um ponteiro, é um objeto!! Assim como o op e o valor.
	arv.raiz = NULL;   // ArvB significa árvore binária.
	
	do {
	printf("\n0 - Opção de sair\n1 - Opção de inserir\n2 - Opção de imprimir\n");
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
			printf("\nImpressão da minha árvore binária:\n");
			imprimir(arv.raiz);
			break;
		default:
			printf("\nOpção inválida...\n");
	}
}while(op != 0);
	
			
// Terminou-se a parte de inserção de elementos em uma árvore binária com RECURSÃO E NÃO-RECURSÃO.

/* Neste conteúdo de árvores binárias; na 3ª questão eu tratei essa estrutura de dados dinâmica que
são extremamente eficientes para busca, utilizando recursividade e não recursividade. */


