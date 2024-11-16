#include<iostream>
using namespace std;

class Demo
{
    public:
        int Addition(int A, int B)
        {
            return 0;
        }
        double Addition(double A,  double B)
        {
            return A+B;
        }
        int Addition(int A,int B,int C)
        {
            return A+B+C;
        }

};

int main()
{
    Demo obj;
    cout<<obj.Addition(10,11)<<"\n";
    cout<<obj.Addition(10.11,11.10)<<"\n";
    cout<<obj.Addition(10,11,20)<<"\n";


    return 0;
}

/*
void Fun(intA,int B);           Fun@2ii
void Fun(int A,int B,int C);    Fun@3iii

void Fun(int A,int B);           Fun@2ii
void Fun(float A, float B);       Fun@2ff

void Fun (int A, float B, double C );  Fun@3ifd
void Fun (double A,float B,int C);      Fun@3dfi

void Fun(int A, int B);        Fun@2ii
int Fun(int A,int B);          Fun@2ii

*/

