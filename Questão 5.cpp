// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, n3;
    int rs1, rs2, rs3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &n2);

    printf("Digite o terceiro numero inteiro: ");
    scanf("%i", &n3);

    rs1 = n1 + n2;
    rs2 = n2 * n3;
    rs3 = n3 / n1;

    printf("\n--- Resultados ---\n");
    printf("Primeiro + Segundo: %i\n", rs1);
    printf("Segundo x Terceiro: %i\n", rs2);
    printf("Terceiro / Primeiro: %i\n", rs3);
    printf("\n");

    system("pause");

    return 0;
}
