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
class DerivedX : public Derived 
{
    public:
        int a,b;
        DerivedX()
        {
            cout<<"Inside DerivedX Counstructor\n";
            a = 50;
            b = 60;
        }
        ~DerivedX()
        {
            cout<<"Inside DerivedX destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }

};

int main()
{
    DerivedX dobj;
    //constuctor : Base -> derived -> DerivedX

    cout<<"Inside the main functions\n";

    cout<<"size of base class "<<sizeof(Base)<<"\n";
    cout<<"size of Derived class "<<sizeof(Derived)<<"\n";
    cout<<"size of Derived class "<<sizeof(DerivedX)<<"\n";

    cout<<dobj.i<<"\n";  //10
    cout<<dobj.j<<"\n";  //20
    cout<<dobj.x<<"\n";  //30
    cout<<dobj.y<<"\n";  //40
    cout<<dobj.a<<"\n";  //50
    cout<<dobj.b<<"\n";  //60

    
    dobj.Fun();  //inside fun of base
    dobj.Gun();  //inside gun of derived
    dobj.Sun();  //inside sun of derivedX

    //destructor : DerivedX -> Derived -> Base

    return 0;
}
