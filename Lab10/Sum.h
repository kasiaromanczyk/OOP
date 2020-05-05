#pragma once
#include"Data.h"

class Data;

class Sum{
    friend Sum sumData(Data d);

    double _sum;

public:
    Sum(){};

    double value();
    void operator()(double x);

};

Sum sumData(Data d);

/* Sum is a functor that lets us add a value to the _sum member with operator()
    (no-member) function sumData sets a sum from numbers in a given day, can initialize a Sum object
    value() returns actual _sum */