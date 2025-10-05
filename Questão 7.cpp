// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float s_m = 1412.00;
    float qtd, sl, n_s;

    printf("Digite quantos salarios minimos voce ganha: ");
    scanf("%f", &qtd);

    sl = qtd * s_m;
    n_s = sl * 1.13;

    printf("\n--- Salários ---\n");
    printf("Salario antigo: R$ %.2f\n", sl);
    printf("Salario com o aumento de 13%%: R$ %.2f\n", n_s);
    printf("\n");

    system("pause");

    return 0;
}
