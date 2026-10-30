#include<iostream>
using namespace std;
void isEven(int);
int main()
{
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    isEven(number);

    return 0;
}

void isEven(int num)
{
    if (num % 2 == 0)
       cout<<num<<" is an even number."<<endl;
    else
       cout<<num<<" is an odd number."<<endl;
}