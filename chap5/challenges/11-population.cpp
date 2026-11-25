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

    while (population < 2){
        cout<<"Population must be 2 or more!"<<endl;
        cout<<"\nCurrent population of "<<name<<": ";
        cin>>population;
    }

    cout<<"Their average daily increase rate %age: ";
    double daily_increase;
    cin>>daily_increase;

    while (daily_increase < 0){
        cout<<"Increase must be positive!"<<endl;
        cout<<"Their average daily increase rate %age: ";
        cin>>daily_increase;
    }

    cout<<"Number of days they'll multiply: ";
    int days;
    cin>>days;

    while (days < 1){
        cout<<"No values less than 1!"<<endl;
        cout<<"Number of days they'll multiply: ";
        cin>>days;
    }

    cout<<"\n------------------------"<<endl;
    cout<<name<<"'s Population chart for "<<days<<" days:- "<<endl;
    cout<<"\nDay \tPopulation"<<endl;

    for (int day = 1; day <= days; day++){
        double increase = population * (daily_increase / 100);

        population += increase;
        cout<<" "<<day<<" \t "<<population<<endl;
    }
}