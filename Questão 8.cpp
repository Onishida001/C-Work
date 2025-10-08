// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float md, n_m, sb;

    printf("Digite a media atual do aluno: ");
    scanf("%f", &md);

    float soma = md + 5;

    if (soma > 10) {
        n_m = 10;
        sb = soma - 10;
    } else {
        n_m = soma;
        sb = 0;
    }

    printf("\n--------------- Media -----------------\n");
    printf("Media original: %.1f\n", md);
    printf("Nova media com 5 pontos extras: %.1f\n", n_m);
    printf("Sobrou %.1f pontos para o proximo bimestre\n", sb);
    printf("\n");

    system("pause");

    return 0;
}
