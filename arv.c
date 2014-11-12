#include "head.h"

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



