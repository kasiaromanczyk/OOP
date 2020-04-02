#include<iostream>
#include<Complex.h>

Complex::Complex(float re, float im):_re(re),_im(im){}

    
Complex Complex::operator+(const Complex x){
    Complex result;
    result._re = _re + x._re;
    result._im = _im + x._im;

    return result;
}

Complex& Complex::operator++(){
    _re++;
    _im++;
    return *this;
}

Complex Complex::operator++(int x){
    Complex result;
    result._re = _re;
    result._im = _im;

    _re++;
    _im++;

    return result;
}

    const float& Complex::re()const {
        return _re;
    }

    float& Complex::re(){
        return _re;
    }

    const float& Complex::im()const {
        return _im;
    }

std::ostream& operator<<(std::ostream &t, const Complex a){
    t<<"("<<a._re<<" + "<<a._im<<"*i)";
    return t;
}
