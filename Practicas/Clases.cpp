#include <iostream>
#include <cmath>  // Para usar M_PI, que representa el valor de PI

using namespace std;

// Definición de la clase Círculo
class Circulo {
private:
    double radio;  // Atributo privado para el radio

public:
    // Constructor para inicializar el radio
    Circulo(double r) {
        radio = r;
    }

    // Método para calcular el área
    double area() {
        return M_PI * radio * radio;
    }

    // Método para calcular el perímetro
    double perimetro() {
        return 2 * M_PI * radio;
    }

    // Método para mostrar los valores
    void mostrarDatos() {
        cout << "Radio: " << radio << endl;
        cout << "Área: " << area() << endl;
        cout << "Perímetro: " << perimetro() << endl;
    }
};

int main() {
    double radio;

    // Solicitar al usuario el radio
    cout << "Ingresa el radio del círculo: ";
    cin >> radio;

    // Crear un objeto de tipo Circulo
    Circulo miCirculo(radio);

    // Mostrar los resultados
    miCirculo.mostrarDatos();

    return 0;
}
