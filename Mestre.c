
#include <stdio.h>

int main() {
    int pop1 = 1000, pop2 = 2000;
    float pib1 = 50.5, pib2 = 40.2;
    
    
    float soma1 = pop1 + pib1;
    float soma2 = pop2 + pib2;

    printf("--- Super Trunfo: Final Master ---\n");
    printf("Soma Carta 1: %.2f | Soma Carta 2: %.2f\n", soma1, soma2);

    
    (soma1 > soma2) ? printf("Resultado: Carta 1 VENCEU!\n") : 
    (soma2 > soma1) ? printf("Resultado: Carta 2 VENCEU!\n") : printf("Resultado: EMPATE!\n");

    return 0;
}