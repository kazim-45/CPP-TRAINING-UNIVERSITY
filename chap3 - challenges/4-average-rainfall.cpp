#include<iostream>
using namespace std;
int main()
{
    string m1, m2, m3;
    float r1, r2, r3, average;

    cout<<"Enter first month name: ";
    cin>>m1;
    cout<<"Enter second month name: ";
    cin>>m2;
    cout<<"Enter third month name: ";
    cin>>m3;

    cout<<"Amount of rain fell in "<<m1<<": ";
    cin>>r1;
    cout<<"Amount of rain fell in "<<m2<<": ";
    cin>>r2;
    cout<<"Amount of rain fell in "<<m3<<": ";
    cin>>r3;

    average = (r1+r2+r3) / 3;

    cout<<"The average rainfall for "<<m1<<", "<<m2<<", and "<<m3<<" is ";
    cout<<average<<endl;

    return 0;
}