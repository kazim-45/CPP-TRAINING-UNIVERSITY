#include<iostream>
using namespace std;
int main()
{
    const double serving = 10, servingCalories = 300;
    double one_cookieCalories, cookies, cookiesCalories;

    one_cookieCalories = servingCalories / serving;

    cout<<"How many cookies did you eat?: ";
    cin>>cookies;

    cookiesCalories = cookies * one_cookieCalories;

    cout<<"Total calories consumed: ";
    cout<<cookiesCalories<<endl;
}