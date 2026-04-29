#include <iostream>
#include <math.h>
using namespace std;

double factorial(int n) {
    double resultado = 1;

    for (int i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

double senoTaylor(double x, int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + (pow(-1, i) * pow(x, 2 * i + 1)) / factorial(2 * i + 1);
    }

    return suma;
}

double cosenoTaylor(double x, int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + (pow(-1, i) * pow(x, 2 * i)) / factorial(2 * i);
    }

    return suma;
}

double exponencialTaylor(double x, int n) {
    double suma = 0;

    for (int i = 0; i < n; i++) {
        suma = suma + pow(x, i) / factorial(i);
    }

    return suma;
}

double logaritmoTaylor(double x, int n) {
    double suma = 0;

    if (x <= -1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        suma = suma + (pow(-1, i + 1) * pow(x, i)) / i;
    }

    return suma;
}

int main() {
    int opcion;
    double x;
    int terminos;

    cout << "SERIES DE TAYLOR" << endl;
    cout << "1. Seno(x)" << endl;
    cout << "2. Coseno(x)" << endl;
    cout << "3. Exponencial(e^x)" << endl;
    cout << "4. Logaritmo ln(1+x)" << endl;
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese la cantidad de terminos: ";
    cin >> terminos;

    if (terminos <= 0) {
        cout << "La cantidad de terminos debe ser mayor que cero." << endl;
        return 0;
    }

    if (opcion == 1) {
        cout << "Aproximacion seno(" << x << ") = " << senoTaylor(x, terminos) << endl;
    }
    else if (opcion == 2) {
        cout << "Aproximacion coseno(" << x << ") = " << cosenoTaylor(x, terminos) << endl;
    }
    else if (opcion == 3) {
        cout << "Aproximacion e^" << x << " = " << exponencialTaylor(x, terminos) << endl;
    }
    else if (opcion == 4) {
        if (x <= -1) {
            cout << "Para ln(1+x), x debe ser mayor que -1." << endl;
        } else {
            cout << "Aproximacion ln(1+" << x << ") = " << logaritmoTaylor(x, terminos) << endl;
        }
    }
    else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
