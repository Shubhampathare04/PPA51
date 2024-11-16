#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        virtual void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Base Gun\n";
        }
        virtual void Sun()
        {
            cout<<"Inside Base Sun\n";
        }
        virtual void Run()
        {
            cout<<"Inside Base Run\n";
        }
};
class Derived : public Base
{
    public :
        int x,y;
        virtual void Fun()
        {
            cout<<"Inside Derived Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
        virtual void Mun()
        {
            cout<<"Inside Derived Mun\n";
        }

};

int main()
{
    cout<<"Size of base class : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived class : "<<sizeof(Derived)<<"\n";

    Derived dobj;
    Base *bptr = NULL;
    
    bptr = &dobj;   //up casting




    bptr->Fun();     //Base Fun
    bptr->Gun();     //Base Gun
    bptr->Sun();     //Base Sun
    bptr->Run();     //Base Run
   // bptr->Mun();     //Error


    return 0;
}