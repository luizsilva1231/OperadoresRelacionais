#include <stdio.h>

int main() {
    double A, B, C;

    // Solicita ao usuário que insira os três valores
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    double temp; // Variável temporária para ajudar na troca de valores

    // Verifica e reorganiza os valores para que estejam em ordem ascendente
    if (A > B) {
        temp = A;
        A = B;
        B = temp;
    }
    if (A > C) {
        temp = A;
        A = C;
        C = temp;
    }
    if (B > C) {
        temp = B;
        B = C;
        C = temp;
    }

    // Imprime os valores em ordem ascendente
    printf("Valores em ordem ascendente: %.2lf, %.2lf, %.2lf\n", A, B, C);

    return 0;
}