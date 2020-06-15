#ifndef LYNDAEL_REPO_MATRIX_H
#define LYNDAEL_REPO_MATRIX_H
#include <string>

class Matrix {
private:
    short unsigned int rows,columns;
    std::string content;
public:
    Matrix();
    Matrix(short unsigned int r, short unsigned int c, std::string con);
    void print();
};


#endif //LYNDAEL_REPO_MATRIX_H
