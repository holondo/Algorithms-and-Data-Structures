#include <stdio.h>

typedef struct elem_
{
    int conteudo;
    struct colecao_ *dir, *esq;
}elem;

typedef struct colecao_
{
    int tipo, altura;
}colecao;