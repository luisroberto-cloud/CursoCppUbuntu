/*En este ejercicio vamos a:
    Pedir al humano un número positivo, en caso de que el número ingresado sea menor a 1 
    ofender al humano y obligarlo a ingresar de nuevo el número.
    Crear una función recursiva que sume los números inferiores hasta llegar a 1.
*/
#include <iostream>

int sumafac(int);

int main(){
    std::cout<<"\n\nEste programa suma todos los numeros anteriores al ingresado\n\n";
    int num;
    regreso:
    std::cout<<"Ingresa un numero mayor a 1: ";std::cin>>num;
    if (num < 1)
    {
        std::cout<<"\nHumano tonto, debes ingresar un numero mayor a 1\n";
        goto regreso;
    }
    std::cout<<"\nEl resultado de la suma total es: "<<sumafac(num);

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

int sumafac(int num){
    if(num == 1 ){
        return 1;
    }
    return num + sumafac(num-1);
}