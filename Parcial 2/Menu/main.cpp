#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "Menu:" << endl << "1.- Hamburguesa sencilla" << endl << "2.-Hamburguesa doble" << endl;
    cout << "¿Que va a ordenar?" << endl;
    cin >> num1;
    switch(num1){
case 1:
    cout << "Escoje un metodo de pago: " << endl << "1.-Efectivo     2.-Tarjeta" << endl;
    cin >> num2;
    switch(num2){
case 1:
    cout << "Una hamburguesa sencilla." << endl << "Metodo de pago: Efectivo" << endl; break;

case 2:
    cout << "Una Hamburguesa sencilla." << endl << "Metodo de pago: Tarjeta" << endl; break;
default:
    cout << "Opcion no valida." << endl; break;
    }
case 2:
    cout << "Escoje un metodo de pago: " << endl << "1.-Efectivo     2.-Tarjeta" << endl;
    cin >> num2;
    switch(num2){
case 1:
    cout << "Una Hamburguesa doble." << endl << "Metodo de pago: Efectivo" << endl; break;

case 2:
    cout << "Una Hamburguesa doble." << endl << "Metodo de pago: Tarjeta" << endl; break;
default:
    cout << "Opcion no valida." << endl;break;
    }
default:
    cout << "Opcion no valida." << endl; break;
}
return 0;
}
