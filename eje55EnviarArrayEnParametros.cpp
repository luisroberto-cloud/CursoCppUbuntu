/*
Que vamos a hacer en este ejercicio:

    Pedir al humano que ingrese números en un vector.
    Crear una función llamada “cuadrado” que reciba el vector.
    La función “cuadrado” eleve al cuadrado los números del vector.
    Crear una función que muestre los valores del vector.
*/
#include <iostream>

const int tam=5;
void cuadrado(int[]);
void imprimir(int[]);

int main(){
    std::cout<<"\n\n========Este programa eleva al cuadrado los numeros de un array usando funciones===========\n\n";
    int array[tam];
    for (int i = 0; i < tam; i++)
    {
        std::cout<<"\nIngresa el numero "<<i+1<<": ";std::cin>>array[i];
    }
    cuadrado(array);
    imprimir(array);

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
void cuadrado(int vector[]){
    for (int i = 0; i < tam; i++)
    {
        vector[i]=vector[i]*vector[i];
    }
}
void imprimir(int vector[]){
    for (int i = 0; i < tam; i++)
    {
        std::cout<<"\nEl numero "<<i+1<<" elevado al cuadrado es:"<<vector[i];
    }
    
}