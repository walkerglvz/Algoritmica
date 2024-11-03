#include <stdio.h>
#include <conio.h>

int main()
{
    float promedio;
    printf("Ingresa promedio: ");
    scanf("%f", &promedio);

    if(promedio>7)
    {
    printf("Aprobado"); }
    else
    {
        printf("Reprobaste \a");
    }
    getch();
}
