
#include <iostream>
using namespace std;
class Coordinate
{
public:
    Coordinate(int x=0, int y=0) : _x(x), _y(y)
    {
        cout<<"Constrctor is called!\n";
    }
    Coordinate(Coordinate &p){
        _x=p._x;
        _y=p._y;
        cout<<"copy-initialization Constructor is called\n";
    }
    ~Coordinate(){
        cout<<"Destructor is called\n";
    }
    int getx(){
        return _x;
    }
    int gety(){
        return _y;
    }
    void printXy(){
        cout<<"("<<_x<<","<<_y<<")"<<endl;
    }
private:
    int _x, _y;
};

int main()
{
    Coordinate p1(3,4);
    Coordinate p2(p1);
    Coordinate p3=p2;
    cout<<"p3=("<<p3.getx()<<","<<p3.gety()<<")\n";
    Coordinate p4;
    p4.printXy();
    Coordinate p5(2);
    p5.printXy();
    return 0;
}