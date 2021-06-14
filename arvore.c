/* Leon e Guilherme */

#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

t_no *inicia(char valor) {
    t_no *novo = (t_no *)malloc(sizeof(t_no));
    novo->valor[0] = valor;

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
        if (!novo->ehOp && str[*i] != ')' && str[*i] != '(')
            getString(novo, str, i);
        novo->esq = montaArvore(str, i);
        novo->dir = montaArvore(str, i);
        (*i)++;
    }

    return novo;
}

void getString(t_no *no, char *str, int *i) {
    for (int m=1; str[*i] != ')'; (*i)++, m++) {
        no->valor[m] = str[*i];
    }
}

float calculaOps(float esq, char op, float dir) {
    switch (op)
    {
    case '+':
        return esq + dir;
    case '-':
        return esq - dir;
    case '*':
        return esq * dir;
    case '/':
        return esq / dir;
    default:
        break;
    }

    return 0;
}


float percurso(t_no *no) {
    float operEsq, operDir;

    if (!no->ehOp)
        return atof(no->valor);
    else {
        operEsq = percurso(no->esq);
        operDir = percurso(no->dir);
        printf("%g %s %g\n", operEsq, no->valor, operDir);
        return (calculaOps(operEsq, no->valor[0], operDir));
    }

    return 0;
}