#include<iostream>
using namespace std;

int displaySum(int, int);
int main()
{
    int a, b, sum;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"Sum of a and b: ";
    displaySum(a, b);
}

int displaySum(int a, int b)
{
    int sum = a+b;
    cout<<sum<<endl;
    return sum;
}