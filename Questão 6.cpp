// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c, dt;

    printf("Delta: (b^2 - 4ac)\n\n");

    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("Digite o valor de C: ");
    scanf("%f", &c);

    dt = (b * b) - (4 * a * c);

    printf("\nO valor de delta e: %.2f\n", dt);
    printf("\n");

    system("pause");

    return 0;
}
