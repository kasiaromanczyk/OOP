#include<iostream>
#include"Operation.h"

void operator>>=(const char *s, const Operation& d){
        std::cout<<s;
        d.print();
        std::cout<<s<<std::endl;
    }
