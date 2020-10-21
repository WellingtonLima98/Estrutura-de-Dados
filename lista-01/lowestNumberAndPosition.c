#include <stdio.h>

/*
    Escreva um programa que lê um número N . Este N é o tamanho de um array X [ N ]. A seguir, leia cada um dos números de X , encontre o menor elemento deste array e sua posição dentro do array, imprimindo esta informação.

    Entrada
    A primeira linha de entrada contém um inteiro N (1 < N <1000), indicando o número de elementos que devem ser lidos em um array X [ N ] de números inteiros. A segunda linha contém cada um dos valores N , separados por um espaço.

    Resultado
    A primeira linha exibe a mensagem “Menor valor:” seguida por um espaço e o menor número lido na entrada. A segunda linha exibe a mensagem “Posicao:” seguida de um espaço e a posição do array em que está o menor número, lembrando que o array inicia na posição zero.
*/

int main() {
    int N, i, menor, pos = 0;
    scanf("%d", &N);
    int X[N];

    for(i = 0; i < N; i ++) {
        scanf("%d", &X[i]);
    }

    menor = X[0];
    for(i = 1; i < N; i ++) {
        if(X[i] < menor) {
            menor = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\nPosição: %d\n", menor, pos);

    return 0;
}