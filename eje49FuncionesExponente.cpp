/*
En este ejercicio vamos a:
Crear una función llamada “pedirDatos” que le pida al humano 2 números de coma flotante positivos mayores a 0.
Crear una función llamada “retornaExponente” que reciba 2 números y retorne el primer número elevado al exponente del segundo.
Crear una función llamada “muestraExponente” que reciba 2 números y muestre el primer número elevado al exponente del segundo.
Llamar las funciones “pedirDatos”, “retornaExponente” y “muestraExponenete” el resultado a nuestra función principal.
*/
#include<iostream>
#include<math.h>

void pedirDatos();
int retornoExponente(int a, int b);
void muestraExponente();

int num,exponente;

int main(){
    std::cout<<"\n\n===============Este programa eleva el primer numero al exponente del segundo\n";

    pedirDatos();
//Forma1
    std::cout<<"\nEl resultado es: "<<retornoExponente(num,exponente)<<"\n";
//Forma 2
    muestraExponente();

    std::cout<<"\n\nPresiona enter para continuar\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

void pedirDatos(){
std::cout<<"Ingresa el numero: ";std::cin>>num;
std::cout<<"Ingresa el exponente: ";std::cin>>exponente;
}
int retornoExponente(int a,int b){
return pow(num,exponente);
}
void muestraExponente(){
    std::cout<<"El resultado de la potencia es: "<<pow(num,exponente);
}