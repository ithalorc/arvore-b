#include <stdio.h>
#include <stdlib.h>
#include "head.h"

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

NoArvB* insereValor(NoArvB* a, int valor, int indice)
{
	a->k[indice] = valor;
	if(a->n == 0){
		a->p[indice] = NULL;
		a->p[indice + 1] = NULL;
		a->n++;
	}else
		a->p[indice + 1] = NULL;   // talvez seja melhor em outra função - depois
	
	return a;

}

NoArvB* verificaArvore(NoArvB* a, int valor)
{
	int i;
	
	if(a->n == 2*T-1){
		/* Temporário: 'Printf' e 'return' - em caso de árvore cheia */
		printf("Arvore cheia. \n");
		return a;
	}
	if(a->n == 0){
		return insereValor(a,valor,0); 
	}

	return (realocaChaves(a,valor,varreVetor(a,valor)));
	
}

void imprimeArv(NoArvB* a)
{
	int i;

	for(i = 0; i <= a->n-1; i++)
		printf("%d ",a->k[i]);

	return;
}

/*	Retorna o índice no Noh no qual deve ser inserido o novo valor	*/
int varreVetor(NoArvB* a, int valor)
{
	int i;
	
	for(i = 0; i < a->n; i++){
		if(a->k[i] >= valor)
			return i;
	}
	return i;
}

/* Realoca o Noh inserindo o novo valor na posição definida em varreVetor() */
NoArvB* realocaChaves(NoArvB* a, int valor, int indice)
{
	int i;

	for(i = (a->n)-1; i >= indice; i--) // verificar
		a->k[i+1] = a->k[i];
	a->k[i+1] = valor;
	a->n++;

	return a;
}

void removePonteiro(NoArvB* a)
{
	int i;

	for(i=0; i <= a->n; i++){
		free(a->p[i]);
		a->p[i] = NULL;
	}
	free(a);
	a = NULL;

	return;		
}

