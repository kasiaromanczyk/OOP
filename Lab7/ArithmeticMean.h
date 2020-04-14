#pragma once
#include"Mean.h"

class ArithmeticMean: public Mean{
    
    friend void calcAverage(Mean &m);

public: 
    ArithmeticMean():Mean(){};
    operator const char *()override{return "Arithmetic";};
    Mean& operator <<(double) override;
    double result()override;
    using Mean::operator <<;

};
