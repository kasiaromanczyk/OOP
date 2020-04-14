#pragma once
#include"Operation.h"

class Division: public Operation{

public:
    Division(float x, float y):Operation(x,y){};

    void print() const;
    double eval() const;
};

