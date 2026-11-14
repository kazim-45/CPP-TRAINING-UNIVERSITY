#include<iostream>
using namespace std;
void points(int);
int main()
{
    int purchase;

    cout<<"No. of books purchased this month: ";
    cin>>purchase;

    points(purchase);
}

void points(int p)
{
    while (p < 0){
        cout<<"Enter a valid quantity: ";
        cin>>p;
    }
    if (p == 0)
    cout<<"You have earned 0 points."<<endl;
    else if (p == 1)
    cout<<"You have earned 5 points."<<endl;
    else if (p == 2)
    cout<<"You have earned 15 points."<<endl;
    else if (p == 3)
    cout<<"You have earned 30 points."<<endl;
    else
    cout<<"You have earned 60 points."<<endl;

}