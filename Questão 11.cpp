// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float vl, ps, jl;

    printf("--- Calculadora em Joules ---\n\n");

    printf("Digite a velocidade do projetil (em m/s): ");
    scanf("%f", &vl);

    printf("Digite o peso do projetil (em gramas): ");
    scanf("%f", &ps);

    jl = (vl * vl * ps) / 2000.0;

    printf("\n-------------------------------------------------\n");
    printf("A energia do projetil na boca do cano e: %.1f Joules\n", jl);
    printf("-------------------------------------------------\n");

    printf("\n");
    system("pause");

    return 0;
}
