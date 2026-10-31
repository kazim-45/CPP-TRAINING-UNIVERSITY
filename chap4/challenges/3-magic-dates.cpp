/*The date June 10, 1960 is special because when we write it in the following format, the
month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day is
equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.*/

#include<iostream>
using namespace std;
void is_magic(int, int, int);
int main()
{
    int date, month, year;

    cout<<"Enter date: ";
    cin>>date;
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter year (last two-digits): ";
    cin>>year;

    is_magic(date, month, year);
}

void is_magic(int d, int m, int y)
{
    if(d*m == y)
     cout<<"WOW! THIS IS A MAGIC DATE!"<<endl;
    else
     cout<<"Sorry, this is not a magic date."<<endl;
}