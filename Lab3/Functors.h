#pragma once
#include<functional>

namespace Functors{

class divisibleBy {

    int _x;

    public:
    divisibleBy(int x):_x(x){};

    bool operator()(int x);
};

class greaterThan{

    int _x;

    public:
    greaterThan(int x):_x(x){};

    bool operator()(int x);
};

}

/* in namespace Functors (as name says) are two classes with overloaded
    () operator, divisibleBy chechs divisibility,
    greaterThan checks if parameter is greater.
    First parameters are private members, 
    second are given as operator () second parameter */