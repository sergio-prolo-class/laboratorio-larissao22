#include <stdio.h>

int main()
{
    // Variáveis
    float imc, peso, altura;
    float peso, altura;

    printf("Entre com o peso (kg): ");
    scanf("%f", &peso");

    printf("Entre com a altura (1.75)");
    scanf("%f" , &alt");
    
    imc = peso / (alt * alt);
    
    printf ("IMC: %f kg/m²\n" , imc);
    if (imc < 18,5) {
        printf("Magreza");
        else if (imc < 25.0)
        {
            printf("Normal");
            else if (imc < 30.0)
            {
                printf("Sobrepeso");
            }
        }

    }
}