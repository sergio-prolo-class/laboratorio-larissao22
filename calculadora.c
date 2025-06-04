#include <stdio.h>

int main()
{
    // Variavéis
    float n1, n2, res;
    char op;

    printf("Entre com a expressão: ");
    scanf("%f %c %f", &n1, &op, &n2);

    switch (op) {
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                printf("Erro: Divisão por 0");
                return 1;
            }
            res = n1 / n2;
            break;
        default:
            printf("Erro; Operação desconhecida");
            return 1;
    }
}