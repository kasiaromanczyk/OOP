#pragma once
#include"Operation.h"

class Exponentiation : public Operation{

public:
    Exponentiation(float x, float y):Operation(x,y){};

    void print()const;
    double eval() const;
};