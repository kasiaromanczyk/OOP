#include"Mean.h"

void Mean::reset(){
    sum=0;
    n=0;
}

const Mean& Mean::operator <<(double x)const{
        std::cout<<"cannot add value " <<x<<" to const"<<std::endl;
        return *this;
}