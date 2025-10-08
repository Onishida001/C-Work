// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float vlr, v_f;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &vlr);

    v_f = vlr * 0.90;

    printf("\n--- Preco com Desconto ---\n");
    printf("Valor original do produto: R$ %.2f\n", vlr);
    printf("Valor com 10%% de desconto: R$ %.2f\n", v_f);
    printf("\n");

    system("pause");

    return 0;
}
