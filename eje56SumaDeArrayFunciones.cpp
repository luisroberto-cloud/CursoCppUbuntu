/*
Que vamos a hacer en este ejercicio:

    Crear un vector llamado “vec”.
    Crear una función llamada “llenarDatos” que le pida al humano que llene los datos.
    Crear una función llamada “sumaDatos” que reciba el vector y sume el vector y retorne la suma.
*/
#include <iostream>

const int tam = 5;//Tamano de array que no puede cambiar
void llenarVec(int[]);//Prototipo de llenado
int sumaVec(int[]);

int main(){
    std::cout<<"\n\n===========Este programa suma todos los elementos dentro de un array============\n\n";
    int vec[tam];//Crear la variable
//Llamar a la funcion que llenara el array
    llenarVec(vec);
//Llamar y mostrar a la funcion que suma todos los elementos
    std::cout<<"\nEl resultado de la suma es: "<<sumaVec(vec);
    
    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
//Declarar llenado
void llenarVec(int array[]){
    for (int i = 0; i < tam; i++)
    {
        std::cout<<"\nIngresa el numero "<<i+1<<": ";std::cin>>array[i];
    }
    
}
//Declarar funcion de suma
int sumaVec(int array[]){
    int suma= 0;
    for (int i = 0; i < tam; i++)
    {
        suma += array[i];
    }
    return suma;
}