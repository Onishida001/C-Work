// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, med;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    med = (n1 + n2 + n3) / 3.0;

    printf("\nA media final e: %.2f\n", med);
    printf("\n");

    system("pause");

    return 0;
}
