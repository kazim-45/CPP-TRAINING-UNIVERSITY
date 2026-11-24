#include<iostream>
using namespace std;
int sum(int);
int main()
{
    cout<<"Enter a positive number: ";
    int num;
    cin>>num;

    while (num <= 0){
        cout<<"Please enter a positive number."<<endl;
        cout<<"Enter again: ";
        cin>>num;
    }

    int total = sum(num);
    cout<<"Total till "<<num<<" = "<<total<<endl;
    return 0;
}

int sum(int n)
{
    int total = 0;

    for (int i = 1; i <= n; i++)
    {
        total += i;
    }

    return total;
}