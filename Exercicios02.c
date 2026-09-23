#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
    Exercício 01
int* novoVetor(int n, int valor) {
    int* vetor = (int*) malloc(n * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return NULL;
    }
    
    for (int i = 0; i < n; i++) {
        vetor[i] = valor;
    }
    
    return vetor;
}

void printVetor(int* vetor, int n) {
    if (vetor == NULL) return;
    
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", vetor[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int* v1 = novoVetor(3, -1);
    int* v2 = novoVetor(5, 9);

    printVetor(v1, 3);
    printVetor(v2, 5);

    free(v1);
    free(v2);

    return 0;
}
*/

/*

    exercicio 2

void printVetor(int* vetor, int n) {
    if (vetor == NULL) return;
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", vetor[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int vetor_dobraTamanho(int** vetor, int n) {
    int novoTamanho = n * 2;
    
    int* novo = (int*) malloc(novoTamanho * sizeof(int));
    if (novo == NULL) return n;

    for (int i = 0; i < n; i++) {
        novo[i] = (*vetor)[i];
    }

    for (int i = n; i < novoTamanho; i++) {
        novo[i] = 0;
    }

    free(*vetor);
    *vetor = novo;
    return novoTamanho;
}

int main() {
    int* v = (int*) calloc(3, sizeof(int));
    v[0] = 2;
    v[1] = 4;
    v[2] = 6;

    int novoTamanho = vetor_dobraTamanho(&v, 3);
    printVetor(v, novoTamanho);
    free(v);
    return 0;
}*/

/*

    Exercicio 3


typedef struct aluno {
    unsigned int codigo;
    char nome[50];
    float* notas;
    int qtdNotas;
} Aluno;

Aluno* criarAluno(int qtdNotas) {
    Aluno* novo = (Aluno*) malloc(sizeof(Aluno));
    if (novo == NULL) return NULL;

    novo->notas = (float*) calloc(qtdNotas, sizeof(float));
    novo->qtdNotas = qtdNotas;
    return novo;
}

void printAluno(Aluno* a) {
    if (a == NULL) return;

    printf("Codigo: %u\n", a->codigo);
    printf("Nome: %s\n", a->nome);
    printf("Notas: [");
    for (int i = 0; i < a->qtdNotas; i++) {
        printf("%.1f", a->notas[i]);
        if (i < a->qtdNotas - 1) {
            printf(", ");
        }
    }
    printf("]\n\n");
}

int main() {
    Aluno* a1 = criarAluno(5);
    a1->codigo = 1;
    strcpy(a1->nome, "Juan");
    a1->notas[0] = 8.0;
    a1->notas[1] = 7.0;
    a1->notas[2] = 9.0;
    a1->notas[3] = 6.6;
    a1->notas[4] = 8.7;

    Aluno* a2 = criarAluno(3);
    a2->codigo = 2;
    strcpy(a2->nome, "Maria");
    a2->notas[0] = 8.0;
    a2->notas[1] = 7.0;
    a2->notas[2] = 9.0;

    printAluno(a1);
    printAluno(a2);

    free(a1->notas);
    free(a1);
    free(a2->notas);
    free(a2);

    return 0;
}
*/


/*
    Exercício 4

char* string_clone(const char* str) {
    if (str == NULL) return NULL;

    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }

    char* copia = (char*) malloc((tam + 1) * sizeof(char));
    if (copia == NULL) return NULL;

    for (int i = 0; i < tam; i++) {
        copia[i] = str[i];
    }

    copia[tam] = '\0';

    return copia;
}

int main() {
    char str[20] = "ABC";

    char* copia = string_clone(str);
    printf("%s\n", copia);
    free(copia);
    copia = NULL;

    return 0;
}
*/

/*
exercício 5


void vetor_incrementa(int* v, int n) {
    if (v == NULL) return;
    for (int i = 0; i < n; i++) {
        v[i] += 1;
    }
}

void vetor_dobra(int* v, int n) {
    if (v == NULL) return;
    for (int i = 0; i < n; i++) {
        v[i] *= 2;
    }
}

void printvetor(int* vetor, int n) {
    if (vetor == NULL) return;
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", vetor[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
}

int main() {
    int v1[5] = {10, 20, 30, 40, 50};
    int v2[5] = {1, 2, 3, 4, 5};

    vetor_incrementa(v1, 5);
    printvetor(v1, 5);

    vetor_dobra(v2, 5);
    printvetor(v2, 5);

    return 0;
}
*/


/* exercicio de desafio

void printVetor(int* vetor, int n) {
    if (vetor == NULL) return;
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void imprimeDobro(int* x) {
    printf("%d ", (*x) * 2);
}

void incrementaDez(int* x) {
    *x = (*x) + 10;
}

int dobra(int x) {
    return x * 2;
}

int incrementaUm(int x) {
    return x + 1;
}

void vetor_forEach(int* v, int n, void (*funcao)(int*)) {
    if (v == NULL || funcao == NULL) return;
    for (int i = 0; i < n; i++) {
        funcao(&v[i]);
    }
}

int* vetor_map(int* v, int n, int (*funcao)(int)) {
    if (v == NULL || funcao == NULL) return NULL;
    
    int* novo = (int*) malloc(n * sizeof(int));
    if (novo == NULL) return NULL;

    for (int i = 0; i < n; i++) {
        novo[i] = funcao(v[i]);
    }

    return novo;
}

int main() {
    int v[5] = {1, 2, 3, 4, 5};

    printVetor(v, 5);

    vetor_forEach(v, 5, imprimeDobro);
    printf("\n");

    printVetor(v, 5);

    vetor_forEach(v, 5, incrementaDez);

    printVetor(v, 5);

    printf("\n--- Teste Map ---\n");

    int array[5] = {15, 16, 17, 18, 19};

    int* arrayDobrados = vetor_map(array, 5, dobra);
    int* arrayIncrementados = vetor_map(array, 5, incrementaUm);

    printVetor(array, 5);
    printVetor(arrayDobrados, 5);
    printVetor(arrayIncrementados, 5);

    free(arrayDobrados);
    free(arrayIncrementados);

    return 0;
}
*/