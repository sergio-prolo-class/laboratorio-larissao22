#include <stdio.h>

int main()
{
    float faixa_min, faixa_max;
    int n_medicoes, n_medicoes_fora;
    float ph;

    // Lê a faixa
    printf("Entre com a faixa de pH adequada: ");
    scanf("%f %f", &faixa_min, &faixa_max);

    // Lê quantas medições
    printf("Entre com o número de medições: ");
    scanf("%d", &n_medicoes);

    // Lê as medições;
    printf("Entre com as medições de pH: ");
    // for (int = 0; i < n_medicoes; i++) { é equivalente!
    for (int i = n_medicoes; i > 0; i--) {
        scanf("%f", &ph);
        if (ph < faixa_min || ph > faixa_max) {
            n_medicoes_fora++;
        }
    }
    // Escreve o resultado
    printf("Número de medições fora da faixa: %d", n_medicoes_fora);
    return 0;
}