#include<iostream>
#include "matrix.h"

Matrix::Matrix() : rows(1), columns(1), content("a"){}

Matrix::Matrix(short unsigned int r, short unsigned int c, std::string con){
    rows = r;
    columns = c;
    content = con;
}

void Matrix::print(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << content[i*4+j] << " ";
        }
        std::cout << "\n";
    }
}