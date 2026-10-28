#include<iostream>
#include<cmath>
int getPower(int, int);
using namespace std;
int main()
{
    int base, exponent, result;

    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter exponent number: ";
    cin>>exponent;

    result = getPower(base, exponent);
    cout<<base<<" to the power of "<<exponent<<" = ";
    cout<<result<<endl;
    
}

int getPower(int b, int e)
{
    int power = pow(b, e);
    return power;
}