#include <iostream>
#include <string> 

using namespace std;

int rows = 7;
int cols = 7;


/*  Variables globales:
    rows = cantidad de filas de la matriz 
    cols = cantidad de columnas de la matriz
*/

/* ---------------------------------------------------------------------- */
// aa
void agregarUnoIzquierda(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
// bb
void agregarUnoDerecha(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
// cc
void agregarUnoAbajo(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i >= 0 && i < rows - 1 ) matriz[i + 1][j] = 1;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
// dd
void agregarUnoArriba(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
// ee 
void agregarUno(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
                if(i >= 0 && i < rows - 1 ) matriz[i + 1][j] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}
/* ---------------------------------------------------------------------- */
// ff
void agregarUnoIzquierda(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j > 1) matriz[i][j - 2] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}

void agregarUnoDerecha(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j < cols - 2 && j >= 0) matriz[i][j + 2] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
            }
        }
    }
}

void agregarUnoAbajo(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i >= 0 && i < rows - 2 ) matriz[i + 2][j] = 1;
                if(i >= 0 && i < rows - 1) matriz[i + 1][j] = 1;
            }
        }
    }
}

void agregarUnoArriba(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 1) matriz[i - 2][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
            }
        }
    }
}

/* ---------------------------------------------------------------------- */
// gg
void agregarUnoIzquierda(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j > 2) matriz[i][j - 3] = 1;
                if(j > 1) matriz[i][j - 2] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}


void agregarUnoDerecha(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j < cols - 3 && j >= 0) matriz[i][j + 3] = 1;
                if(j < cols - 2 && j >= 0) matriz[i][j + 2] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
            }
        }
    }
}

void agregarUnoAbajo(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i >= 0 && i < rows - 3 ) matriz[i + 3][j] = 1;
                if(i >= 0 && i < rows - 2 ) matriz[i + 2][j] = 1;
                if(i >= 0 && i < rows - 1 ) matriz[i + 1][j] = 1;
            }
        }
    }
}

void agregarUnoArriba(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 2) matriz[i - 3][j] = 1;
                if(i < rows && i > 1) matriz[i - 2][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
            }
        }
    }
}

/* ---------------------------------------------------------------------- */
// hh
void agregarUnoIzquierda(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j > 3) matriz[i][j - 4] = 1;
                if(j > 2) matriz[i][j - 3] = 1;
                if(j > 1) matriz[i][j - 2] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}


void agregarUnoDerecha(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j < cols - 4 && j >= 0) matriz[i][j + 4] = 1;
                if(j < cols - 3 && j >= 0) matriz[i][j + 3] = 1;
                if(j < cols - 2 && j >= 0) matriz[i][j + 2] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
            }
        }
    }
}

void agregarUnoAbajo(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i >= 0 && i < rows - 4 ) matriz[i + 4][j] = 1;
                if(i >= 0 && i < rows - 3 ) matriz[i + 3][j] = 1;
                if(i >= 0 && i < rows - 2 ) matriz[i + 2][j] = 1;
                if(i >= 0 && i < rows - 1 ) matriz[i + 1][j] = 1;
            }
        }
    }
}

void agregarUnoArriba(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 3) matriz[i - 4][j] = 1;
                if(i < rows && i > 2) matriz[i - 3][j] = 1;
                if(i < rows && i > 1) matriz[i - 2][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
            }
        }
    }
}

/* ---------------------------------------------------------------------- */
// ii
void agregarUnoIzquierda(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j > 4) matriz[i][j - 5] = 1;
                if(j > 3) matriz[i][j - 4] = 1;
                if(j > 2) matriz[i][j - 3] = 1;
                if(j > 1) matriz[i][j - 2] = 1;
                if(j > 0) matriz[i][j - 1] = 1;
            }
        }
    }
}


void agregarUnoDerecha(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(j < cols - 5 && j >= 0) matriz[i][j + 5] = 1;
                if(j < cols - 4 && j >= 0) matriz[i][j + 4] = 1;
                if(j < cols - 3 && j >= 0) matriz[i][j + 3] = 1;
                if(j < cols - 2 && j >= 0) matriz[i][j + 2] = 1;
                if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
            }
        }
    }
}

void agregarUnoAbajo(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i >= 0 && i < rows - 5 ) matriz[i + 5][j] = 1;
                if(i >= 0 && i < rows - 4 ) matriz[i + 4][j] = 1;
                if(i >= 0 && i < rows - 3 ) matriz[i + 3][j] = 1;
                if(i >= 0 && i < rows - 2 ) matriz[i + 2][j] = 1;
                if(i >= 0 && i < rows - 1)  matriz[i + 1][j] = 1;
            }
        }
    }
}

void agregarUnoArriba(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                if(i < rows && i > 4) matriz[i - 5][j] = 1;
                if(i < rows && i > 3) matriz[i - 4][j] = 1;
                if(i < rows && i > 2) matriz[i - 3][j] = 1;
                if(i < rows && i > 1) matriz[i - 2][j] = 1;
                if(i < rows && i > 0) matriz[i - 1][j] = 1;
            }
        }
    }
}

/* ---------------------------------------------------------------------- */
// jj

int opcion(string direccionCeldas){
    if(direccionCeldas == "top-5"){
        return 1;
    }else if(direccionCeldas == "top-4"){
        return 2;
    }else if(direccionCeldas == "top-3"){
        return 3;
    }else if(direccionCeldas == "top-2"){
        return 4;
    }else if(direccionCeldas == "bottom-5"){
        return 5;
    }else if(direccionCeldas == "bottom-4"){
        return 6;
    }else if(direccionCeldas == "bottom-3"){
        return 7;
    }else if(direccionCeldas == "bottom-2"){
        return 8;
    }else if(direccionCeldas == "right-5"){
        return 9;
    }else if(direccionCeldas == "right-4"){
        return 10;
    }else if(direccionCeldas == "right-3"){
        return 11;
    }else if(direccionCeldas == "right-2"){
        return 12;
    }else if(direccionCeldas == "left-5"){
        return 13;
    }else if(direccionCeldas == "left-4"){
        return 14;
    }else if(direccionCeldas == "left-3"){
        return 15;
    }else if(direccionCeldas == "left-2"){
        return 16;
    }else{
        return 0;
    }
}

void agregarUno(int **matriz, string posicion, string direccionCeldas){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    int choice = opcion(direccionCeldas);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol){
                matriz[i][j] = 1;
                switch (choice)
                {   
                case 1:
                    if(i < rows && i > 4) matriz[i - 5][j] = 1;
                case 2:
                    if(i < rows && i > 3) matriz[i - 4][j] = 1;
                case 3:
                    if(i < rows && i > 2) matriz[i - 3][j] = 1;
                case 4:
                    if(i < rows && i > 1) matriz[i - 2][j] = 1;
                    if(i < rows && i > 0) matriz[i - 1][j] = 1;
                    break;

                case 5:
                    if(i >= 0 && i < rows - 5 ) matriz[i + 5][j] = 1;
                case 6:
                    if(i >= 0 && i < rows - 4 ) matriz[i + 4][j] = 1;
                case 7:
                    if(i >= 0 && i < rows - 3 ) matriz[i + 3][j] = 1;
                case 8:
                    if(i >= 0 && i < rows - 2 ) matriz[i + 2][j] = 1;
                    if(i >= 0 && i < rows - 1) matriz[i + 1][j] = 1;
                    break;

                case 9:
                    if(j < cols - 5 && j >= 0) matriz[i][j + 5] = 1;
                case 10:
                    if(j < cols - 4 && j >= 0) matriz[i][j + 4] = 1;
                case 11:
                    if(j < cols - 3 && j >= 0) matriz[i][j + 3] = 1;
                case 12:
                    if(j < cols - 2 && j >= 0) matriz[i][j + 2] = 1;
                    if(j < cols - 1 && j >= 0) matriz[i][j + 1] = 1;
                    break;

                case 13:
                    if(j > 4) matriz[i][j - 5] = 1;
                case 14:
                    if(j > 3) matriz[i][j - 4] = 1;
                case 15:
                    if(j > 2) matriz[i][j - 3] = 1;
                case 16:
                    if(j > 1) matriz[i][j - 2] = 1;
                    if(j > 0) matriz[i][j - 1] = 1;
                    break;
                }
            }
        }
    }
}

/* ---------------------------------------------------------------------- */
// nn
bool verificarUno(int **matriz, string posicion){
    int currentRow = atoi(&posicion[0]); 
    int currentCol = atoi(&posicion[2]); 

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == currentRow && j == currentCol && matriz[i][j] == 1){
                return true;
            }
        }
    }
    return false;
}
