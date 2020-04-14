#pragma once
#include<iostream>

class Operation{
    friend void operator>>=(const char *s, const Operation& d);
protected:
    float _x,_y;

public:
    Operation(float x=1, float y=1):_x(x),_y(y){};
    virtual ~Operation(){};

    virtual void print() const=0;
    virtual double eval() const =0;

};

/*base class for math operations, pure virtual
    virtual functions print() and eval() work 
    properly for each derived class object*/