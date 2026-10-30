/*Q: Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.*/
#include<iostream>
using namespace std;
int main(){
    double a, b;

    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;

    if (a==b)
     cout<<a<<" and "<<b<<" are equal"<<endl;
    else if (a>b)
     cout<<a<<" is larger than "<<b<<endl;
    else
     cout<<b<<" is larger than "<<a<<endl;
 
    return 0;
}