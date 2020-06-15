#include<iostream>
#include"matrix.h"
#include"lyndael.h"

using namespace std;

int main() {
    string key = "sesnajstsesnajst";
    string plaintext = "texttobeencryptd";
    string test = "oldoldoldoldoldo";

    Matrix a = Matrix(4,4,Lyndael::parse(test));
    a.print();

    a.set_content("newnewnewnewnewn");
    a.print();

	return 0;
}