#include<iostream>
#include"matrix.h"
#include"lyndael.h"

using namespace std;

int main() {
    string key = "sesnajstsesnajst";
    string plaintext = "texttobeencryptd";
    string test = "abcdefghijklmnop";

    Matrix a = Matrix(4,4,Lyndael::parse(test));
    a.print();

	return 0;
}