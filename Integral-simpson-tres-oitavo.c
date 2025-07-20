#include <stdio.h>
#include <math.h>

double f(double x){
    return 1/x;
}
double simpson_tres_oitavos(double a, double b, int n){
    double h = (b - a) / n;
    double soma = f(a) + f(b);

    for(int i = 1; i < n; i++){
        double x = a + i * h;
        if(i % 3 == 0){
            soma += 2 * f(x);

        }else{
            soma += 3 * f(x);
        }
    }
    return (3.0 * h / 8.0) * soma;
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

    double resultado = simpson_tres_oitavos(a,b,n);
    printf("Resultado aproximado da integração: %lf\n", resultado);

    return 0;
}