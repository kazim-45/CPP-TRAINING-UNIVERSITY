#include<iostream>
using namespace std;
int main()
{
    double gallons, miles, mpg;

    cout<<"Gallons of gas for full tank: ";
    cin>>gallons;

    cout<<"Miles driven in full tank: ";
    cin>>miles;

    mpg = miles / gallons;

    cout<<"Miles driven per gallon of gas: "<<mpg<<endl;

    return 0;
}