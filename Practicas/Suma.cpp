#include <iostream>
using namespace std;

int main() {
    int a, b, resultado;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingresa el primer número: ";
    cin >> a;

    cout << "Ingresa el segundo número: ";
    cin >> b;

    // Realizar la suma directamente en el main
    resultado = a + b;

    // Mostrar el resultado
    cout << "La suma de " << a << " y " << b << " es: " << resultado << endl;

    return 0;
}
