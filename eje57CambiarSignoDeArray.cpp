/*
Que vamos a hacer en este ejercicio:

    Crear un vector llamado “vec”.
    Crear una función llamada “llenarDatos” que le pida al humano que llene los datos.
    Crear una función llamada “cambiaSigno” que reciba el vector cambie el signo de cada elemento.
    Crear una función llamada “MostrarVector” que muestre cada elemento del vector.
*/
#include <iostream>

void llenarVec(int[]);
void cambiarSigno(int[]);
void imprimir(int[]);

const int tam = 5;

int main(){
    std::cout<<"\n\n============Este programa cambia el signo de todos los elementos de un array============\n\n";
    int vec[tam];//Creacion de array
    llenarVec(vec);//llenar el array
    cambiarSigno(vec);//Cambiar el signo de todos los elementos
    imprimir(vec);//Mostrar el array

    std::cout<<"\n\nPresiona enter para continuar...\n\n";\
    std::cin.ignore();
    std::cin.get();
}

void llenarVec(int vec[]){
    for (int i = 0; i < tam; i++)
    {
        std::cout<<"\nIngresa el numero "<<i+1<<": ";std::cin>>vec[i];
    }
}
void cambiarSigno(int vec[]){
    for (int i = 0; i < tam; i++)
    {
        vec[i] = vec[i] * -1;
    }
}
void imprimir(int vec[]){
    for (int i = 0; i < tam; i++)
    {
        std::cout<<"\nEl resultado es: "<<vec[i];
    }
}