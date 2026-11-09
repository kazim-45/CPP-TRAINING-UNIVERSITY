#include<iostream>
void calculate(int);
using namespace std;
int main()
{
    int seconds;
    
    cout<<"Enter seconds: ";
    cin>>seconds;

    calculate(seconds);
    return 0;
}

void calculate(int s)
{
    double m, h, d;
    
    if (s >= 86400){
        d = s/86400;
        cout<<"days = "<<d<<endl;;
}
    else if (s >= 3600){
        h = s/3600;
        cout<<"hours = "<<h<<endl;}
    else if (s >= 60){
        m = s/60;
        cout<<"minutes = "<<m<<endl;
    }
    else{
        cout<<"seconds = "<<s<<endl;
    }
}