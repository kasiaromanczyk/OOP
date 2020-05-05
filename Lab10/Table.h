#pragma once
#include<vector>
#include<functional>
#include"Data.h"


class Table{

    std::vector<Data> _cont;
    
public:
    size_t minRow;
    //Table();

    void operator+=(Data d);
    void print();

    void find_minRow();

    Table& sort(size_t x);

    Table& sortBy(std::function<bool(const Data&, const Data&)>);


};

    /*class Table is a container for Dates
    adding new date to container with operator+=
    Table& sort(size_t x) - sorts container by column of given number x

    Table& sortBy(std::function<bool(const Data&, const Data&)>) - sorts container 
    accordingly to function given, we use greaterSum defined in main
    
    
    */