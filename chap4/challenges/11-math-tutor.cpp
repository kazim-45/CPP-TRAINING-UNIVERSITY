/*The program should display two
random numbers that are to be added, such as:
 247
+129
-----

The program should wait for the student to enter the answer. If the answer is correct,
a message of congratulations should be printed. If the answer is incorrect, a message
should be printed showing the correct answer.*/

#include<iostream>
using namespace std;
void math_tutor(double, double, double);
int main()
{
    double first, second, sum;

    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;

    sum = first + second;

    math_tutor(first, second, sum);
}

void math_tutor(double a, double b, double sum)
{
    cout<<"      "<<a<<endl;
    cout<<"    + "<<b<<endl;
    cout<<"    -------"<<endl;
    cout<<"Ans: ";
    double answer;
    cin>>answer;
    cout<<endl;

    sum = a+b;

    if (answer == sum)
    cout<<"Correct answer! Congratulations!"<<endl;

    else
    {
    cout<<"Wrong! The answer was "<<sum<<endl;
    cout<<"Study Maths!"<<endl;
    }
}