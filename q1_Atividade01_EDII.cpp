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
		
		// Fun��es getters e setters
		
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
			if (raiz == NULL) {  // Explica��o: verifica se a �rvore est� vazia
			raiz = new No(chave);  // Explica��o: cria um novo n�
		}else {
			inserirAux(raiz, chave);  // De acordo com esses padr�es da nossa �rvore bin�ria criada
			
		}
		
		void inserirAux(No *no, int chave) {
			// Se for menor o valor, insere � esquerda
		if (chave < no -> getChave()) {
			// Verifica se a posi��o � esquerda � nula
			if (no -> getEsq() == NULL) {
				No *novo_no = new No(chave);
				no -> setEsq(*novo_no) ; 
			// Seta novo n� � esquerda
			}else {
			// Sen�o continua percorrendo a �rvore recursivamente
				inserirAux(no -> getEsq(), chave));
			}
		}
		    // Se for maior o valor, insere � direita
		else if(chave -> no -> getChave()) {
			// Verifica se � direita � nula
			if (no -> getDir() ==NULL)) {
				No *novo_no = new No(chave);
				no -> setDir(*novo_no);
			// Seta *novo_no � direita
			}else {
			// Sen�o continua percorrendo a �rvore recursivamente
			    inserirAux(no -> getDir(), chave));
			}
			// Caso for igual os valores, n�o vai inserir
			// N�o se pode ter duas chaves iguais
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
		    // Agora, faremos a chamada para recurs�o
		    
		int main(int argc, char *argv[]) {
			
			Arvore arv;
			
			// Inserir as chaves corretamente com dados aleat�rios para a, b, d, e, c, f :
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
			


/*Para os estudos de �rvores bin�rias, tratamos uma ordem de percurso em
profundidade com Pr�-Ordem, Em-Ordem e P�s-Ordem */

/* Como resposta da quest�o 1 da atividade, trata-se de uma �rvore bin�ria
com percurso de PR�-ORDEM a, b, d, e, c, f ...deixando mais eficiente a 
impress�o dos valores que colocarei abaixo. */

/* Neste conte�do de �rvores bin�rias tratamos eleas como estrutura de dados din�mica que
s�o extremamente eficientes para busca e usa-se recursividade e n�o recursividade. */




