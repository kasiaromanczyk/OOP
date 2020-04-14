#pragma once
#include<vector>
#include<functional>


class FilterCriteria{

std::vector<std::function<bool(int)>> container;

public:
    void add(std::function<bool(int)> f);
    int size();
    std::function<bool(int)> get(int);

};

/*class FilterCriteria is a container for functions
    we use for filtering, its member functions:
    add - inserts new function
    size - returns container size
    get - returns funstion from given position in container */