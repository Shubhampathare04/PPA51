#include<iostream>
using namespace std;

double Addition(double No1,double No2)
{
    double Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double A = 10,B = 11;
    cout<<Addition(A,B)<<"\n";

    return 0;
}