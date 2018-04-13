#include <stdio.h>
#include <stdlib.h>
//estructura promedio
struct promedio{
    float nota1;
    float nota2;
    float nota3;
};
//estructura alumno le anidamos la estructura promedio
struct alumno{
    char nombre[30];
    char sexo[15];
    int edad;
    struct promedio prom;
}estudiantes[100];

//variables globales

void pedirDatos();
void mostrarDatos();
float mejorPromedio();
void datosMejorPromedio();
float menorPromedio();
void datosPeorPromedio();

int tam;
float prom_estudiante[50];
int base1, base2;

int main()
{
    pedirDatos();
    mostrarDatos();
    printf("MEJOR PROMEDIO\n");
    printf("Mayor promedio: %1.1f\n", mejorPromedio());
    datosMejorPromedio();
    printf("menor promedio: %1.1f\n",menorPromedio());
    datosPeorPromedio();


    return 0;
}
void pedirDatos(){

    printf("ingrese la cantidad de estudiantes existentes\n");
    scanf("%d",&tam);

//llenando datos de los estudiantes

    for(int i=0;i<tam;i++){
            fflush(stdin);
        printf("ingrese su nombre: ");
        fgets(estudiantes[i].nombre,30,stdin);
        printf("ingrese el sexo: ");
        fgets(estudiantes[i].sexo,15,stdin);
        printf("ingrese la edad: ");
        scanf("%d",&estudiantes[i].edad);
        printf("\n");

        printf("notas del estudiante\n");
        printf("nota1: ");
        scanf("%f",&estudiantes[i].prom.nota1);
        printf("nota2: ");
        scanf("%f",&estudiantes[i].prom.nota2);
        printf("nota3: ");
        scanf("%f",&estudiantes[i].prom.nota3);
        printf("\n");

        prom_estudiante[i] = (estudiantes[i].prom.nota1+estudiantes[i].prom.nota2+estudiantes[i].prom.nota3)/3;

    }
    system("pause"),
    system("cls");
}

void mostrarDatos(){
    for(int i=0;i<tam;i++){
            printf("datos del estudiante\n");
            printf("\n");
            printf("Nombre: %s\n",estudiantes[i].nombre);
            printf("Sexo: %s\n",estudiantes[i].sexo);
            printf("Edad: %d\n ",estudiantes[i].edad);

            printf("Promedio: %1.1f \n",prom_estudiante[i]);
            printf("\n");

}
}

float mejorPromedio(){
    int mayor=0;
    for(int i=0; i<tam; i++){
        if(prom_estudiante[i]>mayor){
            mayor=prom_estudiante[i];
            base1=i;
        }
    }
    return mayor;
}

void datosMejorPromedio(){
    for(int i=base1; i<=base1; i++){
        printf("datos del estudiante\n");
            printf("\n");
            printf("Nombre: %s\n",estudiantes[base1].nombre);
            printf("Sexo: %s\n",estudiantes[base1].sexo);
            printf("Edad: %d\n ",estudiantes[base1].edad);

            printf("Promedio: %1.1f \n",prom_estudiante[base1]);
            printf("\n");

    }
}

float menorPromedio(){
    int menor = 99999;

    for(int i=0; i<tam; i++){
        if(prom_estudiante[i]<menor){
            menor=prom_estudiante[i];
            base2=i;
        }
    }
    return menor;
}

void datosPeorPromedio(){
    for(int i=base2; i<=base2; i++){
            printf("\n");
            printf("Nombre: %s\n",estudiantes[base2].nombre);
            printf("Sexo: %s\n",estudiantes[base2].sexo);
            printf("Edad: %d\n ",estudiantes[base2].edad);

            printf("Promedio: %1.1f \n",prom_estudiante[base2]);
            printf("\n");
    }
}
