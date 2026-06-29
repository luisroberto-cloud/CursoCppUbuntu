//Ejemplo del uso de & (se usa para afectar variables dentro de main usando otras funciones)
#include <iostream>
//Prototipo de funcion
void modificarVariable(int& num);//Usamos "&"

int main(){
    int numero = 10;
    std::cout<<"\nEl numero antes de la funcion es: "<<numero;

    modificarVariable(numero);

    std::cout<<"\nEl numero despues de la funcion es: "<<numero;


    std::cout<<"\n\nPresiona enter para continuar...";
    std::cin.get();
}

//Declarar funcion
void modificarVariable(int& num){
    num = num * 2;
}