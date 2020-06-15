#include<iostream>
#include "matrix.h"

Matrix::Matrix() : rows(1), columns(1), content("a"){}

Matrix::Matrix(short unsigned int r, short unsigned int c, std::string con){
    rows = r;
    columns = c;
    content = con;
}

void Matrix::set_content(std::string n_cont){
    this->content = n_cont;
}

void Matrix::print(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << content[i*4+j] << " ";
        }
        std::cout << "\n";
    }
}

char& Matrix::operator[](int index){
    return this->content.at(index);
}

Matrix& Matrix::operator + (Matrix &obj){
    std::string n_cont;
    if((this->rows == obj.rows) && (this->columns == obj.columns)){
        for(int i = 0; i < obj.content.length(); i++){
            n_cont += (this->content.at(i)) ^ obj[i];
        }
    }
    this->set_content(n_cont);
}