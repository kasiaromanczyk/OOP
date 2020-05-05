#include"Table.h"
#include<algorithm>

using namespace std::placeholders;

void Table::operator+=(Data d){
    _cont.push_back(d);
    this->find_minRow();
}


void Table::print(){

    std::for_each(std::begin(_cont), std::end(_cont), Data::printData);
   
}

void minimum(Data d, size_t &t){
    if (d._tab.size()<t) t = d._tab.size();
}

void Table::find_minRow(){
    size_t min=_cont[0]._tab.size();
    //for(Data i :_cont) if(i._tab.size()<min) min=i._tab.size();
    std::for_each(std::begin(_cont), std::end(_cont), std::bind(minimum, _1,min));
    minRow = min;
}


bool sorting( Data& d1,  Data& d2, int x){
	return d1._tab[x] < d2._tab[x];
}
Table& Table::sort(size_t x){
    if (x>=minRow) std::cout<<"Indeks "<<x<<" nieprawidłowy!"<<std::endl;

    std::sort(_cont.begin(), _cont.end(), std::bind(sorting,_1,_2,x));

    return *this;
}


Table& Table::sortBy(std::function<bool(const Data&, const Data&)> f){

    std::sort(_cont.begin(), _cont.end(), f);
    return *this;

    }