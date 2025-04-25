//Desafio realizado pelos alunos Juan e Valquíria

#include "requisicao.h"   // Header com a definição da estrutura Requisicao e suas funções
#include <stdlib.h>       // Para malloc e free
#include <string.h>       // Para strncpy

// Estrutura que representa uma requisição de atendimento
struct requisicao {
    char nome[41];           // Nome do paciente (até 40 caracteres + '\0')
    int inscricao;           // Número de inscrição (identificador único)
    char procedimento[11];   // Tipo de procedimento (até 10 caracteres + '\0')
};

// Cria e inicializa uma nova Requisicao com os dados fornecidos
Requisicao* cria_requisicao(const char* nome, int inscricao, const char* procedimento) {
    if (!nome || !procedimento) return NULL;

    Requisicao* nova = (Requisicao*)malloc(sizeof(Requisicao));
    if (!nova) return NULL;

    // Copia o nome com segurança
    strncpy(nova->nome, nome, sizeof(nova->nome) - 1);
    nova->nome[sizeof(nova->nome) - 1] = '\0';

    nova->inscricao = inscricao;

    // Copia o procedimento com segurança
    strncpy(nova->procedimento, procedimento, sizeof(nova->procedimento) - 1);
    nova->procedimento[sizeof(nova->procedimento) - 1] = '\0';

    return nova;
}

// Retorna o nome do paciente
const char* get_nome(Requisicao* r) {
    return (r ? r->nome : NULL);
}

// Retorna o número de inscrição
int get_inscricao(Requisicao* r) {
    return (r ? r->inscricao : -1);
}

// Retorna o procedimento solicitado
const char* get_procedimento(Requisicao* r) {
    return (r ? r->procedimento : NULL);
}

// Libera a memória alocada para a requisição
void libera(Requisicao* r) {
    if (r) free(r);
}
