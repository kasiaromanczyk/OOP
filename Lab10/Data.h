#pragma once
#include<iostream>
#include<string>
#include<vector>

class Sum;

class Data{
    friend class Sum;
    friend class Table;
    friend Sum sumData(Data d);
    friend bool sorting(Data& d1,Data& d2,int x);
    friend void minimum(Data d, size_t &t);

    std::string _day;
    std::vector<float> _tab;

public:
    Data(std::string day="", std::vector<float> tab={0}):_day(day), _tab(tab){};

    void print() const;

    static void printData(Data d);

    };

    /* class represents a date: name of the day and set of numbers */