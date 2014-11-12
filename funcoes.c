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

