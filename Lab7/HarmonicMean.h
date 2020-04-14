#pragma once
#include"Mean.h"

class HarmonicMean: public Mean{
    
    friend void calcAverage(Mean &m);

    public:
        HarmonicMean():Mean(){};
        static HarmonicMean* create();

        operator const char *()override {return "Harmonic:";};
        Mean& operator <<(double) override;
        double result()override{return get_n()/get_sum();};
        using Mean::operator <<;

};

