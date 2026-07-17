/*En este ejercicio vamos a:
    Pedir al humano que ingrese un número PAR.
    Almacenar la captura del número en un puntero.
    Si el valor del puntero es PAR felicitar al humano, de lo contrario reprender al humano.
    Mostrar la dirección de memoria del número.
*/
#include<iostream>

int main(){                                                                                       
    std::cout<<"\n\n===========Este programa verifica si un numero es par o impar y te dice su direccion de memoria =============\n\n";
    int input;
    std::cout<<"\nIngresa un numero: ";std::cin>>input;
    if (input % 2 == 0)
    {
        std::cout<<"\nEl numero "<<input<<" es par";
    }else if (input % 2 == 1)
    {
        std::cout<<"\nEl numero "<<input<<" es impar";
    }    
    
    int *puntero = &input;
    std::cout<<"\nLa direccion de memoria del numero es: "<<puntero;

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}