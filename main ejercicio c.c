#include <stdio.h>
#include <stdlib.h>

 struct empleados{
     char nombre[30];
     int  salario;
     char ocupacion[15];

 }empleado[100];

 int tamano;

void pedirDatos();
void mostrarDatos();
void mayorSalario();
void menorSalario();

int main()
{
    pedirDatos();
    mostrarDatos();
    mayorSalario();
    menorSalario();

    return 0;
}

void pedirDatos(){
    printf("Ingrese cantidad trabajadores a encuestar: ");
    scanf("%d",&tamano);

    //Llenando datos trabajadores
    for(int i=0; i<tamano; i++){
            fflush(stdin);
        printf("ingrese su nombre: \n");
        fgets(empleado[i].nombre, 30, stdin);
        printf("ingrese su ocupacion:\n ");
        fgets(empleado[i].ocupacion, 15, stdin);
        printf("ingrese su salario: \n");
        scanf("%d",&empleado[i].salario);
    }
    system("pause");
    system("cls");
}

// mostrando datos de los trabajadores

void mostrarDatos(){
    for(int i=0; i<tamano; i++){
        printf("Nombre: %s\n",empleado[i].nombre);
        printf("Ocupacion: %s\n ",empleado[i].ocupacion);
        printf("Salario: %d\n ",empleado[i].salario);
    }
}

void mayorSalario(){
    int mayor=0;
    int base,i;

    for(int i=0;i<tamano;i++){
            if(empleado[i].salario>mayor){
                mayor=empleado[i].salario;
                base=i;
            }

    }
    printf("el salario mayor es: %d\n",empleado[i].salario,i);
}

void menorSalario(){
    int menor = 0;
    int base,i;
    for(int i=0;i<tamano;i++){
            if(empleado[i].salario<menor){
                menor=empleado[i].salario;
                base=i;
    }

}
    printf("el salario menor es: \n",empleado[i].salario,i);
}
