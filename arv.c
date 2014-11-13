#include "head.h"

/*
 * Variaveis
 */


int n, valor;



main(){

	NoArvB *a = (NoArvB*)malloc(sizeof(NoArvB));

	a = criaArv();

	valor = 0;

	while(valor >=0){
		printf("Digite um valor:\n");
		scanf("%d",&valor);
		if(valor >=0)
			a = verificaArvore(a,valor);


	}

	imprimeArv(a);
	printf("\n");
	removePonteiro(a);

}



