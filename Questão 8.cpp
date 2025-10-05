// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float md, n_m;

    printf("Digite a media atual do aluno: ");
    scanf("%f", &md);

    n_m = md + 5;

    printf("\n--- Media com Bonus ---\n");
    printf("Media original: %.1f\n", md);
    printf("Nova media com 5 pontos extras: %.1f\n", n_m);
    printf("\n");

    system("pause");

    return 0;
}
