#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, F;
    printf("Temperatura em graus celsius: ");
    scanf("%f", &C);

    F = (9 * C + 160) / 5;

    printf("A temperatura em fahrenheit e: %.2f°F\n", F);
    return 0;
}


Versão atualizada
#include <stdio.h>

// Função para converter Celsius em Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    
    if (scanf("%f", &celsius) != 1) {
        fprintf(stderr, "Entrada inválida. Certifique-se de digitar um número.\n");
        return 1; // erro
    }

    fahrenheit = celsiusParaFahrenheit(celsius);
    
    printf("A temperatura em Fahrenheit é: %.2f°F\n", fahrenheit);

    return 0;
}
