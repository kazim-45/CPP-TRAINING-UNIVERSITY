#include<iostream>
using namespace std;
int main()
{
    double pounds, kilograms;

    cout<<"Enter your weight in pounds: ";
    cin>>pounds;

    kilograms = pounds / 2.2;

    cout<<"Your weight in kilograms is: "<<kilograms<<"kg"<<endl;

    return 0;
}