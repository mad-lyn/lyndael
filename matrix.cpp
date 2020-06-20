#include<iostream>
#include<bitset>
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

void Matrix::print(void(*lambda)(char)){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            lambda(content[i*rows+j]);
        }
        std::cout << "\n";
    }
}

char& Matrix::operator[](int index){
    return this->content.at(index);
}

Matrix Matrix::operator + (Matrix &obj){
    std::string n_cont = "";
    if((this->rows == obj.rows) && (this->columns == obj.columns)){
        for(int i = 0; i < obj.content.length(); i++){
            n_cont += (this->content.at(i)) ^ obj[i];
        }
    }
    return Matrix(this->rows,this->columns, n_cont);
}

Matrix Matrix::operator * (Matrix &obj){
    return Matrix(1,1,"a");
}
