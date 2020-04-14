#pragma once
#include<iostream>
#include<vector>
#include<functional>
#include<string>

class List{

    std::vector<int> _list;                         //container for elements

public:
    void insert(int);                              //inserts element
    void print(std::string s="")const;             //prints contents and title s (if given)

    int& operator[](int x){return _list[x];};      //operator [] returns element from given position

    List filter(std::function<bool(int)>);         //allows to filter list with different functions of given type

};