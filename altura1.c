#include <stdio.h>

#define POL_POR_PE (12)
#define CM_POR_POL (2.54)

int main()
{
    // Variáveis
    int pes, pol;
    float alturametro

        printf("Entre com sua altura em pés + polegadas (ex: 5 10): ");
    scanf("%d%d", &pes, &pol);

    pol = pes * POL_POR_PE + pol;
    metros = pol * CM_POR_POL / 100;
    printf("Altura em metros: %2.f\n, metros")

        // Fim
        return 0;
}