#include <stdio.h>
#include <math.h>

int main() {
    double numero, resultado;

    // Solicita que o usuário insira um número
    printf("Digite um número: ");
    scanf("%lf", &numero);

    // Verifica se o número é positivo ou igual a zero
    if (numero >= 0) {
        // Calcula a raiz quadrada do número
        resultado = sqrt(numero);
        printf("A raiz quadrada de %.2lf é %.2lf\n", numero, resultado);
    } else {
        // Calcula o quadrado do número
        resultado = numero * numero;
        printf("O quadrado de %.2lf é %.2lf\n", numero, resultado);
    }

    return 0;
}