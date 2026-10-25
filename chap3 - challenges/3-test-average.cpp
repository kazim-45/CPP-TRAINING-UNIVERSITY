#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t1, t2, t3, t4, t5, sum, average;

    cout<<"Enter test 1 score: ";
    cin>>t1;
    cout<<"Enter test 2 score: ";
    cin>>t2;
    cout<<"Enter test 3 score: ";
    cin>>t3;
    cout<<"Enter test 4 score: ";
    cin>>t4;
    cout<<"Enter test 5 score: ";
    cin>>t5;

    sum = t1+t2+t3+t4+t5;
    average = sum / 5;

    cout<<"Average of the test scores = ";
    cout<<average<<endl;

    return 0;

}