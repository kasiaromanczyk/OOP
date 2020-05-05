#include"Sum.h"
#include<algorithm>
#include<functional>

double Sum::value(){
    return _sum;
}

void Sum::operator()(double x){
    _sum+=x;

}


Sum sumData(Data d){
    
    Sum result;
    //std::for_each(d._tab.begin(), d._tab.end(),std::ref(result));
    result = std::for_each(d._tab.begin(), d._tab.end(),Sum());
    return result;
}