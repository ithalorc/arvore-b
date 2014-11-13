#include <stdio.h>
#include <stdlib.h>


#define T 3


/*
 *  Estrutura da arvore
 */

struct noArvB
{
	int n;						// Numero de chaves arvazenadas no noh
	int k[2*T-1];				// Vetor de chaves
	struct noArvB *p[2*T];  // Vetor de ponteiros para subarvores
	int f;						// 1 se é folha, 0 caso contrario
};
typedef struct noArvB NoArvB;


/*
 * Prototipos
 */

// insereValor() e realocaValor() - parecidos

NoArvB* criaArv();
NoArvB* insereValor(NoArvB* a, int valor, int indice);
NoArvB* realocaChaves(NoArvB* a, int valor, int indice);
void imprimeArv(NoArvB* a);
void removePonteiro(NoArvB* a);
int varreVetor(NoArvB* a, int valor);
NoArvB* verificaArvore(NoArvB* a, int valor);



