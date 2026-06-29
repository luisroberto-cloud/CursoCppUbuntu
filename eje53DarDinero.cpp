/*
Que vamos a hacer en este ejercicio:

    Pedir al humano que ingrese un “número” int.
    Crear una función llamada “entregaDinero” que reciba el “número” y que reciba por referencia 8 denominaciones de cambio (mil,cien,cincuenta,veinte,diez,cinco,uno).
    La función “entregaDinero” debe calcular la cantidad de cambio a entregar.
*/
#include <iostream>
#include <cstdlib>//Para limpiar la terminal en linux
#include <thread>
#include <chrono>
#include <string>

int* entregaDinero(int);//Prototipo de funcion

int main(){
    regreso:
    system("clear");//Equivalente a cls en windows
    std::cout<<"\n\n==========Este programa devuelve la cantidad de billetes a entregar=================\n\n";
    int numHumano;
    std::cout<<"Ingresa el dinero que quieres retirar: ";std::cin>>numHumano;
    //Filtro para evitar errores
    if (std::cin.fail())
    {
        std::cout<<"\nSolo puedes escribir numeros";
        std::cin.clear();
        std::cin.ignore();
        std::this_thread::sleep_for(std::chrono::seconds(3));//Forma de Sleep() pero universal para cualquier SO
        goto regreso;
    }
    //Guardar el puntero de la funcion
    int* guardar = entregaDinero(numHumano);
    //Mostrar el resultado
    std::cout<<"\nAqui esta el efectivo: \n";
    std::cout<<"Billetes de $1: "<<guardar[0];
    std::cout<<"\nBilletes de $5: "<<guardar[1];
    std::cout<<"\nBilletes de $10: "<<guardar[2];
    std::cout<<"\nBilletes de $20: "<<guardar[3];
    std::cout<<"\nBilletes de $50: "<<guardar[4];
    std::cout<<"\nBilletes de $100: "<<guardar[5];
    std::cout<<"\nBilletes de $1000: "<<guardar[6];

    std::string reinicio;
    std::cout<<"\n\nEn caso de querer retirar de nuevo ingresa S/s, de lo contrario presiona cualquier caracter seguido de enter:";    
    std::cin>>reinicio;
    if ( (reinicio == "S") or (reinicio == "s"))
    {
        std::this_thread::sleep_for(std::chrono::seconds(3));
        goto regreso;
    }else {
        std::cout<<"\nHasta luego";
    }

    std::cout<<"\n\nPresiona enter para continuar...\n\n";
    std::cin.ignore(1000,'\n');
    std::cin.get();
    return 0;
}
//Declarar la funcion
int* entregaDinero(int a){
    int total = 0,c1000 = 0,c100 = 0,c50 = 0,c20 = 0,c10 = 0,c5 = 0,c1 = 0;
    while ( total + 1000 <= a)
    {
        c1000++;
        total += 1000;
    }
    while (total + 100 <= a)
    {
        c100++;
        total += 100;
    }
    while (total + 50 <= a)
    {
        c50++;
        total += 50;
    }
    while (total + 20 <= a)
    {
        c20++;
        total += 20;
    }
    while (total + 10 <= a)
    {
        c10++;
        total += 10;
    }
    while (total + 5 <= a)
    {
        c5++;
        total += 5;
    }
    while (total + 1 <= a)
    {
        c1++;
        total += 1;
    }

    int* arreglo = new int[7]{c1,c5,c10,c20,c50,c100,c1000};
    return arreglo;
}