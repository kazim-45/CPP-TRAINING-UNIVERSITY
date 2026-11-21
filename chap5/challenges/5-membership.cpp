#include<iostream>
using namespace std;

int main()
{
    int charges = 2500;
    const double INCREASE = 0.04;

    cout<<"\nCurrent Charges = "<<charges<<endl;
    cout<<"Charges After: "<<endl<<endl;

    for (int year = 1; year<=6; year++){
        double increase = charges * INCREASE;
        charges += increase;

        cout<<year<<" years = "<<charges<<endl;
    }
}