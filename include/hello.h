#pragma one
#include "namespace.h"

class Hello{
private:
    string _s;
public:
    Hello():_s("hello"){}
    Hello(string s):_s(s){}

public:
    void print_s();
};