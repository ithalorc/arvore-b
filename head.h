#include <stdio.h>
#include <stdlib.h>


#define T 3


/*
 *  Estrutura da arvore
 */

struct noArvB
{
        int n;                                          // Numero de chaves arvazenadas no noh
        int k[2*T-1];                           // Vetor de chaves
        struct noArvB *p[2*T];  // Vetor de ponteiros para subarvores
        int f;                                          // 1 se é folha, 0 caso contrario
};
typedef struct noArvB NoArvB;


/*
 * Prototipos
 */


NoArvB* criaArv();
NoArvB* insereValor(NoArvB* a, int n);
void imprimeArv(NoArvB* a);
void removePonteiro(NoArvB* a);

