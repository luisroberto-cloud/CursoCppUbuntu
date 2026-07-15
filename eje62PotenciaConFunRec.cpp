/*En este ejercicio vamos a:
    Pedir al humano un número base y  un exponente (ambos positivos), en caso de que el alguno de los números ingresado sea menor a 1 ofender al humano y obligarlo a ingresar de nuevo el número.
    Crear una función recursiva que eleve el número base a la potencia del exponente.
*/

#include<iostream>

int potencia(int,int);

int main(){
    std::cout<<"\n\n===========Este programa eleva n al exponente n usando funciones recursivas=============\n\n";
    int numBase,exponente;
    std::cout<<"Ingresa el numero base: ";std::cin>>numBase;
    std::cout<<"\nAhora ingresa el  exponente: ";std::cin>>exponente;
    std::cout<<"El numero "<<numBase<<" elevado a la "<<exponente<<" es: "<<potencia(numBase,exponente);

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

int potencia(int base, int exponente){
    if(exponente == 0){
        return 1;
    }
    
    return base * potencia(base, exponente - 1);
}