#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base Counstructor\n";
            i =10;
            j =20;
        }
        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base fun\n";
        }


};

class Derived : public Base 
{
    public:
        int x,y;
        Derived()
        {
            cout<<"Inside Derived Counstructor\n";
            x = 30;
            y = 40;
        }
        ~Derived()
        {
            cout<<"Inside Derived destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Derived gun\n";
        }

};

int main()
{
    Derived dobj;

    cout<<"Inside the main functions\n";

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";
    
    dobj.Fun();
    dobj.Gun();

    return 0;
}
