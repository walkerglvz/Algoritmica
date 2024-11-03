#include <iostream>
using namespace std;

int main() {
    char opcion;
    do {
        int numero, factorial = 1;

        // Pedimos al usuario que ingrese un número
        cout << "Ingrese un número entero positivo: ";
        cin >> numero;

        // Validamos que el número sea positivo
        if (numero < 0) {
            cout << "El número debe ser positivo." << endl;
            continue; // Volvemos al inicio del bucle
        }

        // Calculamos el factorial utilizando un ciclo for
        for (int i = 1; i <= numero; ++i) {
            factorial *= i;
        }

        cout << "El factorial de " << numero << " es: " << factorial << endl;

        // Mostramos la tabla de multiplicar utilizando un ciclo for
        cout << "Tabla de multiplicar del " << numero << ":" << endl;
        for (int i = 1; i <= 10; ++i) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        // Preguntamos al usuario si desea continuar
        cout << "¿Desea calcular el factorial de otro número? (s/n): ";
        cin >> opcion;

        switch (opcion) {
            case 's':
            case 'S':
                // Continuar el bucle
                break;
            case 'n':
            case 'N':
                // Salir del bucle
                return 0;
            default:
                cout << "Opción inválida. Saliendo del programa." << endl;
                return 1;
        }


    } while (true);
return 0;
}
