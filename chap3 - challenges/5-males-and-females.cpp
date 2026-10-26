#include<iostream>
using namespace std;
int main()
{
    int males, females, male_perc, female_perc;
    const double total=20;
    
    cout<<"Number of males in class: ";
    cin>>males;
    cout<<"Number of females in class: ";
    cin>>females;

    male_perc = males / total * 100;
    female_perc = females / total * 100;

    cout<<"Male percentage in class: ";
    cout<<male_perc<<"%"<<endl;;
    cout<<"Female percentage in class: ";
    cout<<female_perc<<"%"<<endl;

    return 0;
}