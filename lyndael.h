#ifndef LYNDAEL_REPO_LYNDAEL_H
#define LYNDAEL_REPO_LYNDAEL_H

#include "matrix.h"
#include <string>

class Lyndael {
private:
    Matrix table;
    std::string key;
public:
    Lyndael(std::string k, std::string t);
    static std::string parse(std::string un_parsed);
};


#endif //LYNDAEL_REPO_LYNDAEL_H
