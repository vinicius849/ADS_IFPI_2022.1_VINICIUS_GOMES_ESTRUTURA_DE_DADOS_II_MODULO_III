#include <iostream>
using namespace std;
template <class T>
class ArvoreNo {
};

class No {
	private:
		No *esq, *dir;  // esq = esquerda e dir = direita
		int chave;
		
	public:
		No(int chave) {
			this -> chave = chave;
			esq = NULL;
			dir = NULL;
		}
		int getChave() {
			return chave;
		}
		
		// Funções getters e setters
		
		No* getEsq() {
			return esq;
		}
		No* getDir() {
			return dir;
		}
		void setEsq(No *no) {
			esq = no;
		}
		void setDir(No *no) {
			dir = no;
		}
};

class Arvore {
	private:
		No *raiz;
		
	public:
		Arvore() {
			raiz = NULL;
		}
		void inserir(int chave) {
			if (raiz == NULL) {  // Explicação: verifica se a árvore está vazia
			raiz = new No(chave);  // Explicação: cria um novo nó
		}else {
			inserirAux(raiz, chave);  // De acordo com esses padrões da nossa árvore binária criada
			
		}
		
		void inserirAux(No *no, int chave) {
			// Se for menor o valor, insere à esquerda
		if (chave < no -> getChave()) {
			// Verifica se a posição à esquerda é nula
			if (no -> getEsq() == NULL) {
				No *novo_no = new No(chave);
				no -> setEsq(*novo_no) ; 
			// Seta novo nó à esquerda
			}else {
			// Senão continua percorrendo a árvore recursivamente
				inserirAux(no -> getEsq(), chave));
			}
		}
		    // Se for maior o valor, insere à direita
		else if(chave -> no -> getChave()) {
			// Verifica se à direita é nula
			if (no -> getDir() ==NULL)) {
				No *novo_no = new No(chave);
				no -> setDir(*novo_no);
			// Seta *novo_no à direita
			}else {
			// Senão continua percorrendo a árvore recursivamente
			    inserirAux(no -> getDir(), chave));
			}
			// Caso for igual os valores, não vai inserir
			// Não se pode ter duas chaves iguais
		}
		
		No* getRaiz() {
			return raiz;
		}
		void EmOrdem(No* no) {
			if (no != NULL) {
				EmOrdem(no -> getEsq())
				cout << no -> getChave() << " "
				EmOrdem(no -> getDir());
			}
		}
		    // Agora, faremos a chamada para recursão
		    
		int main(int argc, char *argv[]) {
			
			Arvore arv;
			
			// Inserir as chaves corretamente com dados aleatórios para a, b, d, e, c, f :
			arv.inserir(4);
			arv.inserir(1);
			arv.inserir(3);
			arv.inserir(2);
			arv.inserir(6);
			arv.inserir(5);
			arv.inserir(7);
			
			// Com isso, Percurso de ordem desde a raiz
			cout << "Percorrendo em ordem...\n";
			arv.EmOrdem(arv.getRaiz());
			


/*Para os estudos de Árvores binárias, tratamos uma ordem de percurso em
profundidade com Pré-Ordem, Em-Ordem e Pós-Ordem */

/* Como resposta da questão 1 da atividade, trata-se de uma árvore binária
com percurso de PRÉ-ORDEM a, b, d, e, c, f ...deixando mais eficiente a 
impressão dos valores que colocarei abaixo. */

/* Neste conteúdo de árvores binárias tratamos eleas como estrutura de dados dinâmica que
são extremamente eficientes para busca e usa-se recursividade e não recursividade. */




