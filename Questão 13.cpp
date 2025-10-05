// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float fh, cs;

    printf("--- Conversor de Temperatura: Fahrenheit para Celsius ---\n\n");

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &fh);

    cs = 5.0 * (fh - 32.0) / 9.0;

    printf("\n-------------------------------------------------------\n");
    printf("A temperatura de %.1f F vale %.1f C.\n", fh, cs);
    printf("-------------------------------------------------------\n");

    printf("\n");
    system("pause");

    return 0;
}
