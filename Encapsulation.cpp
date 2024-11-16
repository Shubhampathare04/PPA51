#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;

        void Fun()
        {
            cout<<"Inside Fun\n";
        }
        void Gun()
        {
            cout<<"Inside Gun\n";
        }
};

int main()
{
    Demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.A = 11;
    obj.B = 21;
    
    obj.Fun();       //inside Fun
    obj.Gun();       //inside Gun

    cout<<obj.A<<"\n";      //11
    cout<<obj.B<<"\n";      //21
    return 0;
}