#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "Bienvenido al programa de conversion de grados Celsius a Fahrenheit";
    cout << "\nIntroduzca los grados: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << "C son " << fahrenheit << "F" << endl;

    return 0;
}
