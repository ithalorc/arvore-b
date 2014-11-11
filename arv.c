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
	struct noArvB *p[2*T];	// Vetor de ponteiros para subarvores
	int f;						// 1 se é folha, 0 caso contrario
};
typedef struct noArvB NoArvB;


/*
 * Prototipos
 */


NoArvB* criaArv();
NoArvB* insereValor(NoArvB* a, int n);
void imprimeArv(NoArvB* a);
void removePonteiro(NoArvB* a);

/*
 * Variaveis
 */


int n;



main(){

	NoArvB *a = (NoArvB*)malloc(sizeof(NoArvB));

	a = criaArv();

	printf("Digite um valor:\n");
	scanf("%d",&n);
	a = insereValor(a,n);

	imprimeArv(a);

	removePonteiro(a);

}


/* 
 * Funcoes 
 */


NoArvB* criaArv()
{
	NoArvB *a = (NoArvB*)malloc(sizeof(NoArvB));
	a->n = 0;
	a->f = 1;

	return a;
}

NoArvB* insereValor(NoArvB* a, int n)
{
	a->k[0] = n;
	a->n++;
	if(a->n == 0){
		a->p[0] = NULL;
		a->p[1] = NULL;
	}else
		a->p[2] = NULL;
	
	return a;

}

void imprimeArv(NoArvB* a)
{
	printf("%d\n",a->k[0]);

	return;
}

void removePonteiro(NoArvB* a)
{
	int i;

	free(a->p[0]);
	a->p[0] = NULL;
	free(a->p[1]);
	a->p[1] = NULL;
	free(a);
	a = NULL;

	return;		
}

