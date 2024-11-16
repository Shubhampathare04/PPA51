#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1, No2;

        Demo(int A,int B)
        {
            No1 = A;
            No2 = B;
        }
};

int main()
{
    int i = 10, j = 20;
    int Ans = 0;

    Ans = i + j;

    Demo obj1(10,20);
    Demo obj2(30,450);

    Demo obj3(0,0);
    obj3 = obj1 + obj2;

    return 0;
}