#include<iostream>
#include<bitset>
#include"matrix.h"
#include"lyndael.h"

using namespace std;

int main() {
    string key = "sesnajstsesnajst";
    string plaintext = "texttobeencryptd";
    string test = "oldoldoldoldoldo";

    Matrix a = Matrix(2,2,"abcd");
    Matrix b = Matrix(2,2,"dcba");

    a.print([](char x){
        cout << x << " ";
    });
    b.print([](char x){
        cout << x << " ";
    });

    a = a+b;
    a.print([](char x){
        cout << bitset<8>(x) << " ";
    });

	return 0;
}