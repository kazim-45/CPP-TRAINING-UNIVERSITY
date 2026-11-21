#include<iostream>
using namespace std;

int main()
{
    const double RISING_RATE = 1.5;
    const int YEARS = 25;

    double rise = 0;

    for (int year = 1; year<=YEARS; year++){
        rise += RISING_RATE;
        cout<<" year "<<year<<" = "<<rise<<"mm"<<endl;
    }

}