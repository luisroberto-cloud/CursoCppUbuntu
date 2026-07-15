#include <iostream>

int factorial(int);

int main(){
    std::cout<<"\n\n===========Este programa utiliza funciones revursivas para sacar el factorial de un numero=================\n\n";
    int numfac;
    std::cout<<"Ingresa un numero: ";std::cin>>numfac;
    std::cout<<"\nEl factorial de "<<numfac<<" es: ";
    std::cout<<factorial(numfac);

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

int factorial(int num){
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
    
}