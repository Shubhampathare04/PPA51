#include <iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};
class Derived : public Base
{
    public :
        int x,y;
        void Fun()
        {
            cout<<"Inside Derived Fun\n";
        }

};

int main()
{
   
    Base bobj;
    

    Derived dobj;

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;   //No casting 
    dptr = &dobj;   //No casting
    bptr = &dobj;   //up casting
   // dptr = &bobj;   //down Casting    -->> NA

    

    return 0;
}
