/*
   QUESTÂO 1 

void soma(int a, int b, int* saida){
    int s = a + b;
    *saida = s;
}

// Trecho de execução:
int x = 4;
int y = 6;
int resultado;

soma(x, y, &resultado);

// a) Qual será o valor de resultado após a execução?
// R)O valor de resultado será 10

soma(x, y, resultado);

// b) O que acontece se chamarmos a função assim?
// R) Vai ocorrer um erro de compilação, pois a função espera um ponteiro para int como terceira parametro

*/

/*
   //QUESTÃO 2

void quadrado(int n, int* saida) {
    *saida = n * n;
}

*/

/*
  //QUESTAO 3

  void calcula(int a, int b, int* soma, int* diferenca){

    *soma = a + b;
    *diferenca = a - b;
  }
*/

/*
    //QUESTÂO 4


    void altera(int* x){
    *x = *x + 10;
}

// Trecho de execução:
int a = 5;
altera(&a);

// A) a) Qual será o valor final de a?
   // R) O valor final da variavel a sera 15

// B) Explique o que acontece com base no uso de ponteiros.
   // R) A função recebe o endereço de memória de a no ponteiro x. Através do operador *x, ela acessa o valor lá guardado (5), soma 10 e grava o resultado (15) direto nesse endereço de memória, alterando a variável a original
   */

/*
   //Questão 5

Explique, com suas próprias palavras:

Qual é a principal diferença entre:


int soma(int a, int b);

R) usa o comando retun para devolver o valor diretamente como resultado da função.
Quando usar: Quando você precisa calcular e retornar um valor 

void soma(int a, int b, int* saida);

R)Tem retorno void, não usa retun com valor. Mas devolve o resultado modificando a memoria atraves do ponteiro saida (parametro saida)
Quando usar: Quando você precisa que uma função altere a variavel do programa principal, ou quando precisa retornar mais de um valor ao mesmo tempo

Quando você usaria cada uma?

*/

/*

 //Questão 6

Implemente uma função que receba dois números e retorne:

- o maior valor
- o menor valor

**sem usar return**, apenas com parâmetros de saída.

---

⚠️  **Agora vamos combinar três ideias importantes:**

- Vetores são regiões contínuas de memória
- Ponteiros permitem percorrer essas regiões
- Funções podem usar ponteiros para **receber e devolver dados**



void maiorMenor(int a, int b, int* maior, int* menor){
    if (a > b){
        *maior = a;
        *menor = b;
    } else {
        *maior = b;
        *menor = a;
    }
}
*/

/*
// QUESTÃO 7
Implemente uma função que calcule a soma dos elementos de um vetor.

Assinatura:


void somaVetor(int v[], int tamanho, int* resultado);

Exemplo:


int v[4] = {1, 2, 3, 4};
int r;

somaVetor(v, 4, &r);

// r = 10


void somaVetor(int v[], int tamanho, int* resultado){
    int soma = 0;
    for (int i =0; i<tamanho; i++){
        soma += v[i];
    }
    *resultado = soma;
}
*/

/*
  Questão 8 — Maior valor

Implemente uma função que encontre o **maior valor** de um vetor.


void maiorValor(int v[], int tamanho, int* maior){
    int max = v[0];
    for(int i = 0; i< tamanho; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    *maior = max;
}


*/

/*

    Questão 9 — Menor valor e posição

Implemente uma função que retorne:

- o menor valor
- a posição onde ele aparece

void menorValor(int v[], int tamanho, int* valor, int* posicao){
    int menor = v[0];
    *posicao = 0;

    for(int i = 0; i< tamanho; i ++){
        if (v[i]< menor){
            menor = v[i];
            *posicao = i; 
        }
    }
    *valor = menor;
}

*/
/*
Questão 10 — Média dos elementos

Implemente uma função que calcule a média de um vetor.

void mediaVetor(int v[], int tamanho, float* media){
    int soma = 0;
    for (int i = 0; i< tamanho; i++){
        soma += v[i];
    }
    *media =(float)soma / tamanho;
}
*/

/*

    Questão 11 — Alterando o vetor

Implemente uma função que **dobre todos os valores do vetor**.

void dobraVetor(int v[], int tamanho){
    for(int i = 0; i< tamanho; i++){
        v[i] *= 2;
    }
}

*/


/*

## Questão 12

Implemente uma função que receba um vetor e retorne:

- maior valor
- menor valor
- média

Tudo na mesma função.

void analiseVetor(int v[], int tamanho, int* maior, int* menor, float* media){
    int max = v[0];
    int min = v[0];
    int soma = 0;

    for(int i= 0; i< tamanho; i++){
        if (v[i]> max ){
            max = v[i];
        }
        if (v[i] < min){
            min = v[i];
        }
        soma += v[i];
    }
    *maior = max;
    *menor = min;
    *media = (float)soma / tamanho;
}

*/