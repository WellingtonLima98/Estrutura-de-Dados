#include <stdio.h>

/*
    Escreva um programa que leia um número e imprima o número de Fibonacci correspondente a este número lido. Lembre-se de que os primeiros elementos da série de Fibonacci são 0 e 1 e cada termo seguinte é a soma dos dois anteriores. Todos os números de Fibonacci calculados neste programa devem caber em um número de 64 bits sem sinal.

    Entrada
    A primeira linha da entrada contém um único inteiro T , indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondendo ao N-ésimo termo da série de Fibonacci.

    Resultado
    Para cada caso de teste na entrada, imprima a mensagem "Fib (N) = X", onde X é o N-ésimo termo da série de Fibonacci.
*/

int main() {
    long long int n, primeiro = 0, segundo = 1, prox, c;
    int i, j;

    scanf("%d", &j);

    for(i = 1; i <= j; i++, primeiro = 0, segundo = 1) {
        scanf("%lld", &n);
        n++;

        for(c = 0; c < n; c++) {
            if(c <= 1) {
                prox = c;
            } else {
                prox = primeiro + segundo;
                primeiro = segundo;
                segundo = prox;
            }
        }
        printf("Fib(%lld) = %lld\n", n - 1, prox);
    }
    return 0;
}