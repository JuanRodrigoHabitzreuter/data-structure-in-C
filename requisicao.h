//Desafio realizado pelos alunos Juan e Valquíria

#ifndef REQUISICAO_H
#define REQUISICAO_H

typedef struct requisicao Requisicao;  // Define a estrutura de requisição

Requisicao* cria_requisicao(const char* nome, int inscricao, const char* procedimento);  // Cria uma nova requisição
const char* get_nome(Requisicao* r);  // Retorna o nome da requisição
int get_inscricao(Requisicao* r);  // Retorna o número de inscrição
const char* get_procedimento(Requisicao* r);  // Retorna o procedimento da requisição
void libera(Requisicao* r);  // Libera a memória alocada para uma requisição

#endif
