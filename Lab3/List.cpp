#include"List.h"


void List::insert(int x){

    _list.push_back(x);

}

void List::print(std::string s)const {
    std::cout<<s<<"[";
    for(int n : _list) std::cout<<n<<" ";
    std::cout<<"]"<<std::endl;
}

List List::filter(std::function<bool(int)> f){
    List result;
    for(int n : _list){
        if(f(n)) result.insert(n);
    }
    return result;
}
