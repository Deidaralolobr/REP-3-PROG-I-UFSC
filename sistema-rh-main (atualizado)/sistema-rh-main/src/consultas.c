#include "../include/consultas.h"
#include <string.h>

no_t *consulta_pessoa_por_nome(string nome, no_t *lista)
{
    if (lista == NULL) {
        return NULL;
    }
    if (strcmp(lista->pessoa->nome, nome) == 0) {
        return lista;
    }
    return consulta_pessoa_por_nome(nome, lista->proximo);
}