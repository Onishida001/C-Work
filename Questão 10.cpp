// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float nm;

    printf("Digite um numero positivo e menor que 10: ");
    scanf("%f", &nm);

    if (nm > 0 && nm < 10) {
        float met, ter, dob, pot;

        met = nm / 2.0;
        ter = (nm * 2.0) / 3.0;
        dob = nm * 2.0;
        pot = pow(nm, 5);

        printf("\n--- Resultados para o numero %.2f ---\n", nm);
        printf("Metade do seu valor: %.2f\n", met);
        printf("2/3 do seu valor: %.2f\n", ter);
        printf("Seu dobro: %.2f\n", dob);
        printf("Seu valor elevado a quinta: %.2f\n", pot);

    } else {
        printf("\nErro: O numero digitado nao e valido.\n");
        printf("O valor deve ser maior que 0 e menor que 10.\n");
    }

    printf("\n");
    system("pause");

    return 0;
}
