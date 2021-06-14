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
    char valor[5];
    int ehOp; /* Controla se é ou não operação. */
    t_no *esq, *dir;
};

t_no *inicia(char valor);

t_no *montaArvore(char *str, int *i);

float percurso(t_no *arvore);

float calculaOps(float esq, char op, float dir);

void getString(t_no *no, char *str, int *i);

#endif