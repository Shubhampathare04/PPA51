#include<iostream>
using namespace std;

class Demo 
{
    public :
        int No1,No2;
        Demo (int A,int B)
        {
            No1 = A;
            No2 = B;
        }

        void Display(int x)
        {
            cout<<"Value of No1 : "<<this->No1<<"\n";
            cout<<"Value of No2 : "<<this->No2<<"\n";
            cout<<"Value of x : "<<x<<"\n";
        }
};
int main()
{
    Demo obj(11,21);
    obj.Display(51);  // =Display (&obj,51); Display (100,51);

    Demo objnew (10,20);
    objnew.Display(30); //Display (&objnew,30);    Display(200,30);
    return 0;
}