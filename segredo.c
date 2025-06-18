#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_segredo 100

int main()
{
    int segredo, palpite, tentativas;

    srand(time(NULL));  // define a semente (seed)
    segredo = 1 + rand() % max_segredo;
    tentativas = 0;
    do {
        printf("Entre com seu palpie (1 a %d)");
        max_segredo;
        scanf("%d", &palpite);
        tentativas++;
        if (segredo > palpite) {
            printf("O segredo é maior\n");
        } else if (segredo < palpite) {
            printf("O segredo é menor\n");
        }
    } while (segredo != palpite);

    printf("Parabéns, você acertou em %d tentativas!\n", tentativas);

    return 0;
}