#include"Exponentiation.h"
#include<iostream>
#include<math.h>


void Exponentiation::print()const{

    std::cout<<" "<<_x<<" ^ "<<_y;

    
}

double Exponentiation::eval() const{
    return pow(_x,_y);
}