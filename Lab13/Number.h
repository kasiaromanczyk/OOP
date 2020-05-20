#pragma once
#include<iostream>
#include<exception>
#include<functional>


class Number{

    double _x;          //przechowuje wartość liczby
    static double _min,_max;        
    //zmienne statyczne przechwują dozwolony zakres

public:
    Number(double x);
    //konstruuje nowy obiekt z zadaną wartością jeśli w zakresie, jeśli nie - wyrzuca wyjątek std::out of range 
    //z odpowiednię przyczyną

    void print();
    //wypisuje na ekran informacje o przechowywanej watrości i dozwolonym zakresie 

    double value()const;
    //wypisuje wartość przechowywanej liczby, również dla obiektu typu const
    Number& value();
    //zwraca *this, aby móc wywołać operator=() i stwierdzić, czy można przypisać daną wartość

    static void setRange(double x, double y);       
    //funkcja statyczna obsługuje ustawienie zakresu, 
    //czyli zmiennych statycznych _min._max

    void operator=(double);
    //przypisuje nową wartość jeśli w zakresie, jeśli nie - wyrzuca wyjątek std::out of range 
    //z odpowiednię przyczyną
};

