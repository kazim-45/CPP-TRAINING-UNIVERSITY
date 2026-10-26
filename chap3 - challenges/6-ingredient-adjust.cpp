#include<iostream>
using namespace std;
int main()
{
    float sugar = 1.5, butter = 1.0, flour = 2.75, cookies, factor;
    const double init_cookies = 48;

    cout<<"How many cookies do you want to make?: ";
    cin>>cookies;

    factor = cookies / init_cookies;

    sugar = sugar * factor;
    butter = butter * factor;
    flour = flour * factor;

    cout<<"To make "<<cookies<<" cookies, you need: "<<endl;
    cout<<"Sugar = "<<sugar<<" cups"<<endl;
    cout<<"Butter = "<<butter<<" cups"<<endl;
    cout<<"Flour = "<<flour<<" cups"<<endl;
}