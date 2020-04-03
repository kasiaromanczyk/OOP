#pragma once
#include<string>

class Path{
    friend std::ostream& operator<<(std::ostream& t, Path p);
    std::string _path;
    std::string _which;

public:
    Path(std::string path);
    Path(std::string path, int (*fun)());
    std::string operator/(std::string s)const;

    std::string parent()const;
    std::string str()const;

    static int WIN(){return 0;}
    static int UNIX(){return 1;}

    void reset(int (*fun)());
};

std::string operator/(std::string s1, std::string s2);

std::ostream& operator<<(std::ostream& t, Path p);
