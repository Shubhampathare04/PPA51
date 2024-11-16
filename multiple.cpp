#include <iostream>
using namespace std;



class Base1
{
public:
    int i, j;
    Base1()
    {
        cout << "Inside Base1 constructor\n";
        i = 10;
        j = 20;
    }
    ~Base1()
    {
        cout << "Inside Base1 destructor\n";
        i = 10;
        j = 20;
    }
    void Fun()
    {
        cout << "Inside Fun of Base\n";
    }
};


class Base2
{
public:
    int x, y;
    Base2()
    {
        cout << "Inside Base2 constructor\n";

        x = 30;
        y = 40;
    }
    ~Base2()
    {
        cout << "Inside Base2 destructor\n";
    }
    void Gun()
    {
        cout << "Inside Gun of Base\n";
    }
};


class Derived : public Base1, public Base2
{
public:
    int a, b;
    Derived()
    {
        cout << "Inside derived constructor\n";
        a = 50;
        b = 60;
    }
    ~Derived()
    {
        cout<<"Inside Derived Destuctor\n";
    }
};


int main()
{
    Derived dobj;

    cout <<sizeof(Base1)<<"\n";
    cout <<sizeof(Base2)<<"\n";
    cout <<sizeof(Derived)<<"\n";

    return 0;
}