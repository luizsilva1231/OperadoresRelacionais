#include <stdio.h>

int main() {
    double A, B, C, D;
    
    // Solicita ao usuário que insira os quatro valores
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);
    printf("Digite o valor de D: ");
    scanf("%lf", &D);
    
    // Inicializa as variáveis para armazenar o maior e o menor valores
    double maior, menor;
    
    // Inicializa o maior e o menor com o valor de A para começar
    maior = menor = A;
    
    // Verifica B
    if (B > maior) {
        maior = B;
    } else if (B < menor) {
        menor = B;
    }
    
    // Verifica C
    if (C > maior) {
        maior = C;
    } else if (C < menor) {
        menor = C;
    }
    
    // Verifica D
    if (D > maior) {
        maior = D;
    } else if (D < menor) {
        menor = D;
    }
    
    // Imprime o maior e o menor valores
    printf("O maior valor é: %.2lf\n", maior);
    printf("O menor valor é: %.2lf\n", menor);
    
    return 0;
}