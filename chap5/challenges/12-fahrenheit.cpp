//F = (9/5)*C + 32
#include<iostream>
using namespace std;

int main()
{
    cout<<"Celcius   Fahrenheit"<<endl;
    for (double C=0; C<=40; C++){
        double F = (C* 9/5) + 32;

        cout<<"   "<<C<<"\t     "<<F<<endl;
    }
}