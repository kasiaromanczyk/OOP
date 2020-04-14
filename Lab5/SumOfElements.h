#pragma once
#include"Operation.h"

class SumOfElements : public Operation{
    double * _tab;
    const int _n;
public:
    SumOfElements(double* tab, const int n):Operation(1,1),_tab(tab),_n(n){};


    void print()const;
    double eval() const;

};

/* class SumOfElements contains array of elements to be added
    and quantity(n) */