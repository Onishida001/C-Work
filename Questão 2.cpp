// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, sm;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &n2);

    sm = n1 + n2;

    printf("\nA soma de %i + %i = %i\n", n1, n2, sm);
    printf("\n");

    system("pause");

    return 0;
}
