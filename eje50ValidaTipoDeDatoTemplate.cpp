#include <iostream>
#include <string.h>
#include <typeinfo>

template <class TIPO1,class TIPO2>
void concatenaOsuma(TIPO1 dato1,TIPO2 dato2);
int main(){
    int varEntero=5;
    char varChar='v';
    float varFlotante=5.55;
    concatenaOsuma(varEntero,varFlotante);
    

    std::cin.ignore();
    std::cin.get();
    return 0;
}
template <class TIPO1,class TIPO2>
void concatenaOsuma(TIPO1 dato1,TIPO2 dato2){
    if( std::string(typeid(dato1).name())=="c" || std::string(typeid(dato2).name())=="c"  ){
        std::cout<<"La concatenacion es: "<<dato1<<dato2<<"\n";
    }else{
        std::cout<<"La suma es: "<<(dato1+dato2)<<"\n";
    }
}