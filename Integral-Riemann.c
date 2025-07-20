#include <stdio.h>
#include <math.h>

double f(double x){
    return 1/x;
}

double soma_direita(double a, double b, int n){
    double h = (b - a) / n;
    double soma = 0;

    for(int i = 1; i <= n; i++){
        soma += f(a + i * h);
    }

    return h * soma;
}

double soma_esquerda(double a, double b, int n){
    double h = (b - a) / n;
    double soma = 0;

    for(int i = 0; i <= n - 1; i++){
        soma += f(a + i * h);
    }

    return h * soma;
}

int main(){
    double a = 0;
    double b = 0;
    int n = 0;

    printf("Forneça o valor de A: ");
    scanf("%lf", &a);
    printf("Forneça o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o número de intervalos: ");
    scanf("%d", &n);

    double resultado_direita = soma_direita(a, b, n);
    printf("Integral aproximada (direita): %lf\n", resultado_direita);

    double resultado_esquerda = soma_esquerda(a, b, n);
    printf("Integral aproximada (esquerda): %lf\n", resultado_esquerda);

    return 0;
}
