#include"SumOfElements.h"
#include<iostream>


void SumOfElements::print()const{

    for( int i=0;i<_n-1;i++) std::cout<< _tab[i]<<" + ";
        std::cout<< _tab[_n-1];
}

double SumOfElements::eval() const{
    double sum=0;
    for( int i=0;i<_n;i++) sum+=_tab[i];
    return sum;
}