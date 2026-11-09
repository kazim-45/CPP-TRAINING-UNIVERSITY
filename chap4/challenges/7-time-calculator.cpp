#include<iostream>
using namespace std;

void calculate(int);

int main()
{
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    calculate(seconds);
    return 0;
}

void calculate(int s)
{
    int original = s;     

    int days = s / 86400;
    s %= 86400;   

    int hours = s / 3600;
    s %= 3600;    

    int minutes = s / 60;
    int secs = s % 60;  

    cout << original << " seconds = ";

    
    if (days)    cout << days    << " days, ";
    if (hours)   cout << hours   << " hours, ";
    if (minutes) cout << minutes << " minutes, ";
    cout << secs << " seconds" << endl;
}