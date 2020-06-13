#include<iostream>
#include "matrix.h"

matrix::matrix() : rows(1), columns(1), content("a"){};

void matrix::print(){
    std::cout << content << '\n';
}