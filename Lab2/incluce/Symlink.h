#pragma once

class Symlink{
    friend std::ostream& operator<<(std::ostream& t, Symlink p);

    std::string _str;
    Path * _p;


public:
    Symlink( const std::string s, Path *);
    Path* operator->();

};

std::ostream& operator<<(std::ostream& t, Symlink p);