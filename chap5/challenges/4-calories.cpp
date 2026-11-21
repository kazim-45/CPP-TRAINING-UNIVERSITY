#include<iostream>
using namespace std;

int main()
{
    const double BURN = 3.6;

    cout<<"CALORIES BURNED:"<<endl<<endl;

    for (int mins = 5; mins <=30; mins+=5){
        double burned = mins * BURN;
        
        cout<<"After "<<mins<<" minutes"<< " = "<<burned<<endl;
    }
}