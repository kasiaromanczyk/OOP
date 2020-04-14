#include<iostream>
#include"ArithmeticMean.h"


 Mean& ArithmeticMean::operator <<(double x){
     set_sum(get_sum()+x);
    return *this;
 }

double ArithmeticMean::result(){
    if (get_n() != 0) return get_sum()/get_n();
    return 0;
    }
