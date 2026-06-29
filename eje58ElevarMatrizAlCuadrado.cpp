/*
Que vamos a hacer en este ejercicio:
Crear una matriz llamado “matriz” de 2 filas y 3 columnas e inicializarla.
Crear una función llamada “matrizMuestra” muestre los datos de la matriz.
Crear una función llamada “cuadradoMatriz” que reciba el vector y eleve al cuadrado cada uno de los elementos.
Mostrar la matriz elevada al cuadrado.
*/
#include <iostream>

void print(int[][horizontal]);

const int vertical = 3, horizontal = 2;
int main(){
    std::cout<<"\n\n=========Este programa eleva al cuadrado los elementos de una matriz===========\n\n";
    
    int matriz[vertical][horizontal]
    {1,2,3
    ,4,5,6};
    print(matriz);



    /*
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            std::cout<<" "<<matriz[i][j];
        }
        std::cout<<"\n";
    }
    */

    std::cout<<"\n\nPresiona enter para continiuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}
void print(int matriz[][horizontal]){
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            std::cout<<" "<<matriz[i][j]<<" ";
        }
    std::cout<<"\n";        
    }
}