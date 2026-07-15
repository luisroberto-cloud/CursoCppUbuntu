/*
Que vamos a hacer en este ejercicio:
    Declara una estructura llamada Empleado.
    Crear la función “pedirDatos” que pida los datos del empleado.
    Crear la función “mostraraDatos” que muestre los datos del empleado.
*/ 
#include <iostream>
#include <string>

struct empleados{
    std::string nombreEmpleado;
    int numEmpleado;
};

void pedirDatos(empleados&);
void mostrarDatos(empleados&);

int main(){
    std::cout<<"\n\n=============Este programa usa estructuras y funciones=============\n\n";
    empleados Empleados;
    pedirDatos(Empleados);
    std::cout<<"\nLos datos del empleado son: \n";
    mostrarDatos(Empleados);

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

void pedirDatos(empleados& a){
    std::cout<<"\nIngresa el nombre del empleado: ";std::cin>>a.nombreEmpleado;
    std::cout<<"\nIngresa el numero del empleado: ";std::cin>>a.numEmpleado;
}
void mostrarDatos(empleados& a){
    std::cout<<"\nNombre del empleado: "<<a.nombreEmpleado;
    std::cout<<"\nNumero del empleado: "<<a.numEmpleado;
}