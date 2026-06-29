/*En este ejercicio vamos a:

n1 Crear una función que le pida al humano 2 números enteros positivos.
n2 Crear una función que reciba 2 números y retorne el resultado.
n3 Crear una función que reciba 2 números y muestre el resultado.
n4 Llamar las funciones multiplicación, retornar y mostrar el resultado a nuestra función principal.
*/
#include<iostream>

//prototipo de n1
void pedirDatos();
//Prototipo de n2
int retornoMultiplicacion(int a, int b);
//Prototipo de n3
void mostrarElResultado();

//Declarar variables fuera de las funciones para que su uso sea universal
int num1,num2;

int main(){
    std::cout<<"\n================Este programa multiplica dos numeros usando funciones===================\n";
    std::cout<<"Pedir datos con void\n";
    pedirDatos();
    std::cout<<"Forma 1 usando int:\n";
    std::cout<<"El resultado es: "<<retornoMultiplicacion(num1,num2)<<"\n";
    std::cout<<"Forma 2 usando void\n";
    mostrarElResultado();

    std::cout<<"\n\nPresiona enter para continuar";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

//Declaro n1
void pedirDatos(){
    std::cout<<"Ingresa el primer numero: ";std::cin>>num1;
    std::cout<<"Ingresa el segundo numero: ";std::cin>>num2;
}
//Declaro n2
int retornoMultiplicacion(int a, int b){
    return a * b;
}
//Declaro n3
void mostrarElResultado(){
    std::cout<<"El resultado de la mulriplicacion es :"<<num1 * num2;
}