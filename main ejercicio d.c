#include <stdio.h>
#include <stdlib.h>
struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[30];
    char sexo[15];
    int edad;
    struct promedio prom;
}estudiante;

int main()
{
    float prom_estudiante;

    printf("ingresando los datos del alumno\n");
   printf("ingrese su nombre: ");
   fgets(estudiante.nombre,30, stdin);
   printf("ingrese su sexo: ");
   fgets(estudiante.sexo,15, stdin);
   printf("ingrese su edad: ");
   scanf("%d",&estudiante.edad);

// pedimos las notas del alumno

    printf("pidiendo notas del estudiante\n");
    printf("nota1: ");
    scanf("%f",&estudiante.prom.nota1);
    printf("nota2: ");
    scanf("%f",&estudiante.prom.nota2);
    printf("nota3: ");
    scanf("%f",&estudiante.prom.nota3);
    system("pause");
    system("cls");

    prom_estudiante= (estudiante.prom.nota1+estudiante.prom.nota2+estudiante.prom.nota3)/3;

    printf("datos del estudiante:\n");
    printf("Nombre: %s\n",estudiante.nombre);
    printf("Sexo:%s\n ",estudiante.sexo);
    printf("Edad: %d\n",estudiante.edad);

    printf("su promedio es: %1.1f\n",prom_estudiante);


    return 0;
}
