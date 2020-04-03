#include<iostream>
#include<string>
#include"Path.h"
#include"Symlink.h"



Symlink::Symlink( const std::string s, Path *path):_str(s),_p(path){}

Path* Symlink::operator->(){
    return _p;
}



std::ostream& operator<<(std::ostream& t, Symlink p){
    t<<"Symlink("<<p._str<<")";
    return t;
}