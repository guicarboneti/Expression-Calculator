/* Leon e Guilherme */

#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    t_no *arvore;
    int i = 0;
    char string[50];

    printf("Insira a expressão:\n");
    scanf("%s", string);
    arvore = montaArvore(string, &i);

    int resultado; /* = resultado da função */
    /* printf("%d", resultado); */

    return 0;
}