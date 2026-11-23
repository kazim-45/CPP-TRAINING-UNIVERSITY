#include<iostream>
using namespace std;

int main()
{
    int speed, hours;
    
    cout<<"Enter speed of the vehicle (in mph): ";
    cin>>speed;
    cout<<"Enter no. of hours traveled: ";
    cin>>hours;

    while (speed < 0 || hours < 1){
        cout<<"\nInvalid Input(s)!"<<endl;
        cout<<"Try Again!"<<endl;

        cout<<"Enter speed of the vehicle (in mph): ";
        cin>>speed;
        cout<<"Enter no. of hours traveled: ";
        cin>>hours;
    }

    
    cout<<"Hours \t Distance Traveled"<<endl;
    cout<<"-----------------------------"<<endl;
    
    for (int hour = 1; hour <= hours; hour++){
        int distance = speed * hour;

        cout<<hour<<" \t\t "<<distance<<endl;
    }

    return 0;
}