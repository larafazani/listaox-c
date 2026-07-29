#include <stdio.h>
#include <assert.h>
#include "function_listaox.c"

int main() {
    assert(validar_caractere('X') == 1);
    assert(validar_caractere('O') == 1);
    assert(validar_caractere('A') == 0);

    printf("Criado por: Lara Fazani");
    return 0;
}
