#include<iostream>
using namespace std;
int main()
{
    const double widget_weight = 12.5;
    double pallet_weight;
    int widgets;

    cout<<"Enter pallet's weight: ";
    cin>>pallet_weight;

    widgets = pallet_weight / widget_weight;

    cout<<"Widgets stacked on pallet: ";
    cout<<widgets<<endl;

}