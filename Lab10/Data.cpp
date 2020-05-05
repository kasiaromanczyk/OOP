#include"Data.h"
#include<iomanip>
#include<algorithm>


void print(float x)
{
    std::cout<<std::setw(5)<<x<<"\t";
}

 void Data::print() const{
     std::cout<<_day<<":\t";
     
     std::for_each(_tab.begin(), _tab.end(), ::print);

     std::cout<<"\n";
 }

void Data::printData(Data d){
     d.print();
 }