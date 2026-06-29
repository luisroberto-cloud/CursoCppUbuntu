/*
Que vamos a hacer en este ejercicio:

    Pedir al humano que ingrese el número 1 y el número 2.
    Crear una función llamada “intercambio” que reciba las variables “numero1” y “numero2” por referencia.
    La función “intercambio” asignará el valor de “numero1” en “numero2” y al revés.
    Mostrar al humano el valor de “numero1” y “numero2”.
*/
#include <iostream>

void intercambio(int&,int&);//Prototipo de la funcion

int main(){
    std::cout<<"\n\n========Este programa intercambia dos valores usando Parametros de referencia\n\n";
    int num1,num2;
    std::cout<<"Ingresa el primer numero: ";std::cin>>num1;
    std::cout<<"Ingresa el segundo numero: ";std::cin>>num2;
    std::cout<<"Numeros antes del intercambio:\nNum1: "<<num1<<"\nNum2: "<<num2;
    intercambio(num1,num2);//Se hace el intercambio
    std::cout<<"\nNumeros despues del intercambio: \n"<<"Num1: "<<num1<<"\nNum2: "<<num2;

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}
//Declarar la funcion intercambio
void intercambio(int& a, int& b){
    int aux = a;
    a = b; 
    b = aux;
}
