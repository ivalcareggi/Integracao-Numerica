#include <stdio.h>
#include <math.h>

double f(double x){
    return 1/x;
}

double trapezio(double a, double b, int n){
    double h = (b - a) / n;
    double soma = f(a) + f(b);

    for(int i = 1; i < n; i++){
        double x = a + i * h;
        soma += 2 * f(x);

    }

    return (h/2) * soma;
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

    double resultado_trapezio = trapezio(a, b, n);
    printf("Integral aproximada: %lf\n", resultado_trapezio);


    return 0;
}