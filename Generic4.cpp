#include<iostream>
using namespace std;

template <class T>

T Addition(T No1, T No2)
{
    T Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float A = 10.0,B = 11.0;
    cout<<Addition(A,B)<<"\n";

    int X= 10,Y = 11;
    cout<<Addition(X,Y)<<"\n";

    double P= 10.867,Q = 11.76567;
    cout<<Addition(A,B)<<"\n";

    return 0;
}