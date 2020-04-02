#pragma once
#include<iostream>

class Complex{
    friend std::ostream& operator<<(std::ostream &, const Complex);
    float _re,_im;


public:
    Complex(float re=0, float im=0);

    
    Complex operator+(const Complex);
    Complex& operator++();
    Complex operator++(int x);

    const float& re()const ;
    float& re();
    const float& im()const;

};

std::ostream& operator<<(std::ostream &, const Complex);
