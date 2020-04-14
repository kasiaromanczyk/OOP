#pragma once
#include<iostream>
#include<string>


class Mean{
    
    friend void calcAverage(Mean &m);
    int n;
    double sum;

protected:
    Mean():n(0),sum(0){};

    double get_sum(){return sum;}
    void set_sum(double x){sum=x; n++;}
    int get_n(){return n;}
    //getters and setters for private members

    virtual Mean& operator <<(double)=0;
    virtual operator const char *()=0;
    virtual double result()=0;
    //pure virtual functions for further operations 

    virtual ~Mean(){};
    //virtual destructor

public:
    void reset();
    const Mean& operator <<(double x)const;

};

//basic, pure virtual class 