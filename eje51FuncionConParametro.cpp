/*
Que vamos a hacer en este ejercicio:

    Pedir al humano que ingrese dos valores.
    Hacer la la función “calcularReferencia” que reciba dos números y dos valores referenciados (suma y multiplicación).
    Hacer la la función “calcularReferencia” retorne calcule la multiplicación y la suma.
*/

#include <iostream>

void calcularReferencia(int,int,int&,int& );//Prototipo

int main(){

    std::cout<<"\n\n===========Este programa retorna suma y multiplicacion con parametros de referencia==============\n\n";
    int a,b;//Creacion de variables
    std::cout<<"Ingresa el primer numero:";std::cin>>a;
    std::cout<<"Ingresa el segundo numero:";std::cin>>b;
    int mul,sum;
    calcularReferencia(a,b,sum,mul);//llamo la funcion
    std::cout<<"\nEsto es solo para comprobar que los valores fueron cambiados directamente de la memeoria\n";
    std::cout<<"Suma:"<<sum<<"    Multiplicacion: "<<mul;
    ;

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

void calcularReferencia(int num1 , int num2 , int& suma, int& multiplicacion){
    suma = num1 + num2;
    multiplicacion = num1 * num2;
    std::cout<<"\nEl resultado de la suma es: "<<suma;
    std::cout<<"\nEl resultado de la multiplicacion es: "<<multiplicacion;
}