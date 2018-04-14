#include <stdio.h>
#include <stdlib.h>

struct estudiante{
    char nombre[30];
    int edad, grado;
    float promedio;
    float nota[4];

}alumno1[3];

void crearEstudiante();
void mostrarEstudiante();
float mejorPromedio();
void menu();

int main(){
    int i;
    menu();
    printf("el mejor promedio es: %1.1f",alumno1[i].promedio,mejorPromedio());

     return 0;
}

void menu(){
    int opcion;
    do{
        printf("menu\n");
        printf("1. crear estudiante\n");
        system("pause");
        system("cls");
        printf("2. mostrar estudiante\n");
        printf("3. mejor promedio\n");
        printf("0. salir\n");
        printf("ingrese una opcion\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: crearEstudiante();
            system("pause");
            system("cls");
            break;
            case 2: mostrarEstudiante();
            break;
            case 3: mejorPromedio();
            break;
            case 0: exit(0);
            break;
            default: printf("opcion invalida\n");
        }
    }while (opcion!=0);

}
void crearEstudiante(){
     fflush(stdin);
    for(int i=0; i<3; i++){
            fflush(stdin);
        printf("Ingrese su nombre: ");
        fgets(alumno1[i].nombre, 30, stdin);
        printf("ingrese su edad: ");
        scanf("%d",&alumno1[i].edad, stdin);
        printf("ingrese su grado: ");
        scanf("%d",&alumno1[i].grado, stdin);

        for(int j=0; j<4;j++){
            printf("ingese la nota: ");
            scanf("%f",&alumno1[i].nota[j]);
            alumno1[i].promedio = (alumno1[i].nota[j] + alumno1[i].nota[j] + alumno1[i].nota[j] + alumno1[i].nota[j]) /4;
        }
    }
}

void mostrarEstudiante(){
    for(int i=0;i<3;i++){
        printf("Nombre: %s\n",alumno1[i].nombre);
        printf("Edad: %d\n",alumno1[i].edad);
        printf("Grado: %d\n",alumno1[i].grado);
        for(int j=0; j<4; j++){
            printf("Nota: %1.1f\n",alumno1[i].nota[j]);
        }
        printf("promedio: %1.1f\n",alumno1[i].promedio);
    }
}

float mejorPromedio(){
    int mayor=0, base;
    for (int i=0; i<3; i++){
        if(alumno1[i].promedio>mayor){
            mayor=alumno1[i].promedio;
            base=i;
        }

    }
    return mayor;
}

