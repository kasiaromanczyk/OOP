#include"FilterCriteria.h"


void FilterCriteria::add(std::function<bool(int)> f){
    container.push_back(f);
}

int FilterCriteria::size(){
    return container.size();
}

std::function<bool(int)> FilterCriteria::get(int i){
    return container[i];
}