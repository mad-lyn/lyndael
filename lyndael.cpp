#include "lyndael.h"
#include <string>

std::string Lyndael::parse(std::string un_parsed){
    std::string parsed = "";
    for(int i = 0; i < 15; i++){
        parsed += un_parsed[(i*4)%15];
    }
    parsed += un_parsed[15];
    return parsed;
}

Lyndael::Lyndael(std::string k, std::string t){
    key = k;
    table = Matrix(4,4,Lyndael::parse(t));
}