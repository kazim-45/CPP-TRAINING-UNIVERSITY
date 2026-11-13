#include<iostream>
using namespace std;
void days(int, int);
int main()
{
    int month, year;

    cout<<"Enter the month: ";
    cin>>month;

    cout<<"Enter the year: ";
    cin>>year;

    days(month, year);
}

void days(int m, int y)
{
    while (m < 1 || m > 12){
    cout<<"Enter a valid month (1-12): ";
    cin>>m;
    }
    cout<<"Days in month: ";
    if (m == 2)
        if(y % 100 == 0 && y % 400 == 0 || y % 4 == 0){
        cout<<"29"<<endl;
        cout<<"Woohoo! Leap Year!"<<endl;
        }
        else
        cout<<"28"<<endl;
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m ==12)
    cout<<"31"<<endl;

    else if (m != 2)
    cout<<"30"<<endl;
}
