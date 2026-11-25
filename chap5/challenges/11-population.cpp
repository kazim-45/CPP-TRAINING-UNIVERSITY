#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"Enter organism name: ";
    cin>>name;

    cout<<"\nCurrent population of "<<name<<": ";
    int population;
    cin>>population;

    const double DAILY_INCREASE = 0.5;

    cout<<"Number of days they'll multiply: ";
    int days;
    cin>>days;

    cout<<"\n------------------------"<<endl;
    cout<<name<<"'s Population chart for "<<days<<" days:- "<<endl;
    cout<<"\nDay \tPopulation"<<endl;

    for (int day = 1; day <= days; day++){
        int increase = population * DAILY_INCREASE;

        population += increase;
        cout<<" "<<day<<" \t "<<population<<endl;
    }
}