#include <iostream>
#include <sstream> 

using namespace std;

int rows = 7;
int cols = 7;


void imprimirArreglo(int **matriz){
    for(int i=0;i< rows;i++){
        for(int j=0;j< cols;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void llenarCeros(int **matriz){
    for(int i=0;i< rows;i++){
        for(int j=0;j< cols;j++){
            matriz[i][j] = 0;
        }
    }
}

int main(){
    int** matriz = new int*[rows];
    for (int i = 0; i < rows; ++i)
        matriz[i] = new int[cols];
    
    llenarCeros(matriz);
    agregarUno(matriz, "0,2");
    imprimirArreglo(matriz);
    return 0;
}
