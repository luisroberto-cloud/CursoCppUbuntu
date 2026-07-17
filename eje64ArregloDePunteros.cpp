#include<iostream>

int main(){
    std::cout<<"\n\n===========Este programa hace un arreglo con punteros =============\n\n";
    int array[]{1,2,3,4,5};
    int *puntero = array;
    for (int i = 0; i < 5; i++)
    {
        std::cout<<"\nValor del numero: "<<*puntero
        <<"\nDireccion de memoria del numero: "<<puntero++;
    }
    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}