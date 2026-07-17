#include<iostream>

int main(){
    std::cout<<"\n\n===========Este programa usa punteros  =============\n\n";
    int numero = 2;
    /*
    std::cout<<"\nValor de numero: "<<numero;
    std::cout<<"\nDireccion de memoria: "<<&numero;
    */
    int *puntero = &numero;
    std::cout<<"\nValor del numero: "<<*puntero;
    std::cout<<"\nDireccion de memoria: "<<puntero;

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.get();
}