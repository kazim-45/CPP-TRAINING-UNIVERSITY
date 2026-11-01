/*Weight = mass x 9.8
Write a program that asks the user to enter an object’s mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a mes-
sage indicating that the object is too light.*/

#include<iostream>
using namespace std;
double get_weight(double);
void message(double);
int main()
{
    double mass, weight;

    cout<<"Enter object's mass in kgs: ";
    cin>>mass;

    weight = get_weight(mass);
    cout<<"Weight of the mass: "<<weight<<" Newtons"<<endl;

    message(weight);
}

double get_weight(double m)
{
    return m * 9.8;
}

void message(double w)
{
    if (w>1000)
     cout<<"This object is too heavy."<<endl;
    else if (w<10)
     cout<<"This object is too light."<<endl;
}