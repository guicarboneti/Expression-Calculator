/* Leon e Guilherme */
#ifndef __ARVORE__
#define __ARVORE__

#define TRUE 1;
#define FALSE 0;

/*
Nó da árvore
*/
typedef struct t_no t_no;
struct t_no {
    char valor;
    int ehOp; /* Controla se é ou não operação. */
    t_no *esq, *dir;
};

t_no *inicia(char valor);

t_no *montaArvore(char *str, int *i);

#endif