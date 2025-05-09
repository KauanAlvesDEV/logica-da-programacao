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
