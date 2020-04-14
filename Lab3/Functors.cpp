#include <iostream>
#include "Functors.h"

using namespace Functors;

bool divisibleBy::operator()(int x){
    if(x%_x==0) return 1;
    else return 0;

}

bool greaterThan::operator()(int x){
    if(x>_x) return 1;
    else return 0;

}
/*
std::ostream& operator<<(std::ostream& t, std::function<bool (int)> f){

    return t;
}
*/