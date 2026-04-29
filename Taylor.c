#include <stdio.h>

// Calcula factorial
double factorial(int n) {
    double r = 1.0;
    for (int i = 1; i <= n; i++) r *= i;
    return r;
}

// Calcula potencia
double potencia(double x, int n) {
    double r = 1.0;
    for (int i = 0; i < n; i++) r *= x;
    return r;
}

// Aproximación de e^x
double exp_taylor(double x, int n) {
    double s = 0.0;
    for (int i = 0; i < n; i++) {
        s += potencia(x, i) / factorial(i);
    }
    return s;
}

// Aproximación de sin(x)
double sin_taylor(double x, int n) {
    double s = 0.0;
    for (int i = 0; i < n; i++) {
        int signo = (i % 2 == 0) ? 1 : -1;
        s += signo * potencia(x, 2*i + 1) / factorial(2*i + 1);
    }
    return s;
}

// Aproximación de cos(x)
double cos_taylor(double x, int n) {
    double s = 0.0;
    for (int i = 0; i < n; i++) {
        int signo = (i % 2 == 0) ? 1 : -1;
        s += signo * potencia(x, 2*i) / factorial(2*i);
    }
    return s;
}

int main() {
    double x;
    int n;

    printf("Valor de x: ");
    scanf("%lf", &x);

    printf("Numero de terminos: ");
    scanf("%d", &n);

    printf("\nResultados:\n");
    printf("e^x ≈ %lf\n", exp_taylor(x, n));
    printf("sin(x) ≈ %lf\n", sin_taylor(x, n));
    printf("cos(x) ≈ %lf\n", cos_taylor(x, n));

    return 0;
}
