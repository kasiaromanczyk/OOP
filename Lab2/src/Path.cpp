#include<iostream>
#include<string>
#include"Path.h"


Path::Path(std::string path):_path(path),_which("Unix"){}

Path::Path(std::string path, int (*fun)()):_path(path){
    int i =fun();
    if(i==0)_which="Win";
    else _which="Unix";
}

std::string Path::operator/(std::string s) const{
    std::string result;
    if (_which=="Unix")
        result = _path +"/"+ s;
    else
        result = _path +"\\"+ s;

    return result;
    }

std::string Path::parent()const{
    std::string patt = "/";
    int p = _path.find_last_of( patt);
    std::string result;
    result = _path.substr(0,p);

    return result;
    }

std::string Path::str()const{

    return _path;
    }

void Path::reset(int (*fun)()){
    int i =fun();
    if(i==0)_which="Win";
    else {
        _which="Unix";
        std::size_t p = _path.find_last_of("\\");
        while(p<_path.length()){
            _path.replace(p,1,"/");
            p = _path.find_last_of("\\");
            }     
        }
    }


std::string operator/(std::string s1, std::string s2){
    std::string result;
    if(s1.find_last_of("/")<s1.length()) result = s1+"/"+s2;
    else result = s1+"\\"+s2;
    return result;
}

std::ostream& operator<<(std::ostream& t, Path p){
    t<<"Path("<<p._path<<")";
    return t;
}
