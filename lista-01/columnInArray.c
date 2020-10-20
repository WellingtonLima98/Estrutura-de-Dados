#include <stdio.h>

int main() {
    float M[12][12], soma = 0, media = 0, elemento;
    int i, j, C;
    char T;

    scanf("%d %c", &C, &T);

    if(T == 'S') {
        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                scanf("%f", &elemento);
                M[i][j] = elemento;
            }
        }

        for(i = 0; i < 12; i++) {
            soma += M[i][C];
        }

        printf("%.1f\n", soma);

    } else if(T == 'M') {
        for(i = 0; i < 12; i++) {
            for(j = 0; j < 12; j++) {
                scanf("%f", &elemento);
                M[i][j] = elemento;
            }
        }

        for(i = 0; i < 12; i++) {
            media += M[i][C];
        }

        printf("%.1f\n", media / 12);

    }

    return 0;
}