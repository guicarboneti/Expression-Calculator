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

    float resultado = percurso(arvore);
    printf("%g\n", resultado);

    return 0;
}