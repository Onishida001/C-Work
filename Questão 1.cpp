// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    int s1 = n1;
    int a1 = n1;
    int s2 = n2;
    int a2 = n2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%i", &n2);
    
    s1++;
    a1--;
    s2++;
    a2--;

    printf("\n--- Resultados ---\n");
    printf("Numero digitado: %i\n", n1);
    printf("Seu antecessor: %i\n", a1);
    printf("Seu sucessor: %i\n", s1);
    printf("\n");
    printf("Numero digitado: %i\n", n2);
    printf("Seu antecessor: %i\n", a2);
    printf("Seu sucessor: %i\n", s2);
    printf("\n");

    system("pause");

    return 0;
}
