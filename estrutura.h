//Desafio realizado pelos alunos Juan e Valquíria

#ifndef ESTRUTURA_H
#define ESTRUTURA_H

#include "requisicao.h"  // Inclui o arquivo de cabeçalho da requisição

typedef struct estrutura Estrutura;  // Define a estrutura de fila

Estrutura* create();  // Cria uma nova estrutura (fila)
void inserir(Estrutura* e, Requisicao* r);  // Insere uma requisição na fila
Requisicao* remover(Estrutura* e);  // Remove uma requisição da fila
int get_size(Estrutura* e);  // Obtém o número de elementos na fila
void libera_estrutura(Estrutura* e);  // Libera toda a memória da estrutura

#endif
