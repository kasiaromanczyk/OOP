#include<iostream>
#include"HarmonicMean.h"


 Mean& HarmonicMean::operator <<(double x){
     set_sum(get_sum()+1/x);
    return *this;
 }

HarmonicMean* HarmonicMean::create(){
        HarmonicMean* m = new HarmonicMean;
        return m;
}