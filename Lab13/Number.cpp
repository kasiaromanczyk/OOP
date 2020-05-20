#include"Number.h"

double Number::_min;
double Number::_max;


Number::Number(double x){
    if(x>_min && x<_max) _x=x;
    else throw std::out_of_range("Out of range during contruction");
}


void Number::print(){

    std::cout<<"Number: "<<_x<<" is in the range ["<<_min<<", "<<_max<<"]"<<std::endl;

    }

double Number::value() const{
    return _x;
    }


Number& Number::value(){
    return *this;
    }

void Number::setRange(double x, double y){
    _min=x;
    _max=y;
}

void Number::operator=(double x){
    if(x>_min && x<_max) _x=x;
    else throw std::out_of_range("Out of range during assignment");
    
}