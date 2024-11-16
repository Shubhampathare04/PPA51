#include<iostream>
using namespace std;

class Marvellous
{
    public:
        int No1;
        int No2;

        Marvellous()
        {
            cout<<"Inside constructor\n";
            No1 = 0;
            No2 = 0;

        }
        Marvellous(int A, int B)
        {
            cout<<"Inside parametrised constructor\n";
            No1 = A;
            No2 = B;
        }
        ~Marvellous()
        {
            cout<<"Inside destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};

int main()
{
    Marvellous mobj;
    mobj.Fun();
    return 0;
}