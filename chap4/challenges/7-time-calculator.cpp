#include<iostream>
void calculate(int);
using namespace std;
int main()
{
    int seconds;
    double minutes, hours, days;
    
    cout<<"Enter seconds: ";
    cin>>seconds;

    calculate(seconds);
}

void calculate(int s)
{
    double m, h, d;

    if (s > 60){
        m = s/60;
        cout<<s<<" seconds = "<<m<<" minutes"<<endl;
    }
    else if (s > 3600){
        h = s/3600;
        cout<<s<<" seconds = "<<h<<" hours"<<endl;
    }
    else if (s > 86400){
        d = s/86400;
        cout<<s<<" seconds = "<<d<<" days"<<endl;
    }
    else {
        cout<<s<<" seconds only"<<endl;
    }
}