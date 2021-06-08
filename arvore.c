/* Leon e GUilherme */

#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

t_no *inicia(char valor) {
    t_no *novo = (t_no *)malloc(sizeof(t_no));
    novo->valor = valor;

    if ((valor == '*') || (valor == '+') || (valor == '/') || (valor == '-')) {
        novo->ehOp = TRUE;
    }
    else {
        novo->ehOp = FALSE;
    } 

    novo->dir = NULL;
    novo->esq = NULL;

    return novo;
}

t_no *montaArvore(char *str, int *i) {
    t_no *novo = NULL;

    if (str[*i] == '(') {
        (*i)++;
        novo = inicia(str[*i]);
        (*i)++;
        novo->esq = montaArvore(str, i);
        novo->dir = montaArvore(str, i);
        (*i)++;
    }

    return novo;
}