// Aluno: Samuel Magno Palitot Pereira
// Professor: Naylson Carvalho

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1, a2;
    
    printf("Digite o ano em que voce nasceu: ");
    scanf("%i", &a1); 
    
    a2 = 2025 - a1;
    
    printf("Voce tem %i anos", a2);

    printf("\n");
    system("pause");

    return 0;
}
