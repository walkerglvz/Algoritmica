// Programa suma
#include <conio.h>
#include <stdio.h>

int main()
{
    int num1, num2, total;

    //Solicitar numeros para sumar
    printf("Bienvenido al programa de suma");
    printf("\nIngresa la primera cantidad: ");
    scanf ("%d", &num1);
    printf("Ingrersa la segunda cantidad: ");
    scanf ("%d", &num2);

    //Operacion para el resultado
    total = num1 + num2;

    //Resultado final
    printf("El total es: %d", total);

    getch();
    return 0;
}
