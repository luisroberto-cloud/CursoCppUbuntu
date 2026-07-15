/* En este ejercicio vamos a:
    Pedir al humano un número positivo, en caso de que el número ingresado sea menor a 1 ofender al humano y obligarlo a ingresar de nuevo el número.
    Crear una función recursiva que sume los números inferiores hasta llegar a 1.
*/
#include <iostream>

long long int fibonacci(long long int numero);
int main(){
    long long int n;
    regresa:
    std::cout<<"Humano ingresa un numero mayor o igual a 1: ";
    std::cin>>n;
    if(n<1){
        std::cout<<"Humano tonto el numero que "<<n<<" no es mayor a 1 intenta de nuevo\n";
        goto regresa;
    }
    for (int i = 2; i <= n+1; i++)
    {
        std::cout<<fibonacci(i)<<" , ";
    }
    std::cout<<"\n";
    std::cin.ignore();
    std::cin.get();
    return 0;
}
long long int fibonacci(long long int numero){
    if(numero<=1){
        return numero;
    }else
    {
        return fibonacci(numero-1)+fibonacci(numero-2);
    }
}