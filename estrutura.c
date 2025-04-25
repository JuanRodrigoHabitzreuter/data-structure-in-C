//Desafio realizado pelos alunos Juan e Valquíria

#include "estrutura.h"
#include <stdlib.h>
#include <stdio.h>

// Define o tipo do nó da fila
typedef struct fila Fila;

struct fila {
    Requisicao* req;         // Ponteiro para a requisição
    Fila* proximo;           // Ponteiro para o próximo nó
};

// Estrutura da fila (estrutura de controle)
struct estrutura {
    Fila* inicio;
    Fila* final;
    int tamanhoDaFila;
};

// Cria uma nova estrutura de fila
Estrutura* create() {
    Estrutura* e = (Estrutura*)calloc(1, sizeof(Estrutura));
    return e;
}

// Insere uma requisição no final da fila
void inserir(Estrutura* e, Requisicao* r) {
    if (!e || !r) return;

    Fila* novoNoh = (Fila*)malloc(sizeof(Fila));
    if (!novoNoh) {
        fprintf(stderr, "Erro ao alocar novo nó.\n");
        return;
    }

    novoNo->req = r;
    novoNo->proximo = NULL;

    if (!e->final) {
        e->inicio = e->final = novoNoh;
    } else {
        e->final->proximo = novoNoh;
        e->final = novoNoh;
    }

    e->tamanhoDaFila++;
}

// Remove a requisição do início da fila
Requisicao* remover(Estrutura* e) {
    if (!e || !e->inicio) return NULL;

    Fila* removerNo = e->inicio;
    Requisicao* r = removerNoh->req;

    e->inicio = removerNoh->proximo;
    if (!e->inicio) e->final = NULL;

    free(removerNoh);
    e->tamanhoDaFila--;

    return r;
}

// Retorna o número de elementos
int get_size(Estrutura* e) {
    return (e ? e->tamanhoDaFila : 0);
}

// Libera toda a estrutura e requisições
void libera_estrutura(Estrutura* e) {
    if (!e) return;

    while (e->inicio) {
        Fila* removerNoh = e->inicio;
        e->inicio = removerNoh->proximo;

        libera(removerNoh->req); // Supondo que essa função está implementada em requisicao.c
        free(removerNoh);
    }

    free(e);
}
