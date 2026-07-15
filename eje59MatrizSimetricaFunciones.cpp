/*
Que vamos a hacer en este ejercicio:

    Declara una matriz de 3x3 llamada matriz.
    Pedir al humano que ingrese los datos de la matriz.
    Comprobar que la matriz ingresada sea simétrica o no.
*/
#include <iostream>
const int vertical = 3,horizontal = 3;

void llenarMatriz(int [][horizontal]);
void printMatriz(int [][horizontal]);
void printTraspuesta(int [][horizontal]);
void simetrica(int [][horizontal]);

int main(){
    std::cout<<"\n\n==========Este programa comprueba si una matriz es simetrica usando funciones===========\n\n";
    int matriz[vertical][horizontal];
    //Llenar matriz
    llenarMatriz(matriz);
    std::cout<<"La matriz se ve asi: \n";
    printMatriz(matriz);
    std::cout<<"\nLa matriz traspuesta se ve asi: \n";
    printTraspuesta(matriz);
    //Comprobar si la matriz es simetrica
    simetrica(matriz);

    std::cout<<"\n\nPresiona eenter para continuar...\n\n";
    std::cin.ignore();
    std::cin.get();
}

void llenarMatriz(int matriz[][horizontal]){
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            std::cout<<"\nIngresa el numero de la posicion ["<<i<<","<<j<<"]: ";std::cin>>matriz[i][j];
        }
    }
}

void printMatriz(int  matriz[][horizontal]){
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            std::cout<<"   "<<matriz[i][j];
        }
        std::cout<<"\n";
    }
}

void printTraspuesta(int matriz[][horizontal]){
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            std::cout<<"   "<<matriz[j][i];
        }
        std::cout<<"\n";
    }
}

void simetrica(int matriz[][horizontal]){
    bool simetria = true;
    for (int i = 0; i < vertical; i++)
    {
        for (int j = 0; j < horizontal; j++)
        {
            if ( matriz[i][j] != matriz[j][i] )
            {
                simetria = false;
            }
        }
    }
    if (simetria == true)
    {
        std::cout<<"\nLa matriz es simetrica";
    }else{
        std::cout<<"\nLa matriz no es simetrica";
    }
}