// Programa Nombre, Apellido y Edad
#include <stdio.h>
#include <conio.h>

int main()
{

    // Declarar variables
    char nombre[20];
    char apellido[20];
    int anio_nacimiento, anio_actual, edad;

    // Solicitar el nombre del usuario
    printf("Por favor, ingresa tu nombre: ");
    scanf("%s", nombre);

    // Solicitar el apellido del usuario
    printf("Por favor, ingresa tu apellido: ");
    scanf("%s", apellido);

    // Solicitar el a�o de nacimiento
    printf("Por favor, ingresa tu a�o de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    // Solicitar el a�o actual
    printf("Por favor, ingresa el a�o actual: ");
    scanf("%d", &anio_actual);

    // Calcular edad
    edad = anio_actual - anio_nacimiento;

    // Mostrar Nombre completo y Edad
    printf("Tu nombre es %s %s, y tienes %d a�os.", nombre, apellido, edad);

    getch ();
    return 0;
}
