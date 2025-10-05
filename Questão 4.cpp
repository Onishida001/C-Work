// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, rs;

    printf("Digite um numero inteiro: ");
    scanf("%i", &n1);

    rs = (n1 * 2) * 3;

    printf("\nO triplo do dobro de %i e: %i\n", n1, rs);
    printf("\n");

    system("pause");

    return 0;
}
