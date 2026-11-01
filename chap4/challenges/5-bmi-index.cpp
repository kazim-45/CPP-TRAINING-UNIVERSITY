/*Write a program that calculates and displays a person’s body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is over-
weight or underweight for his or her height.
The program should display a message indicating whether the person has optimal weight, is under-
weight, or is overweight. A sedentary person’s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is consid-
ered to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.*/

#include<iostream>
using namespace std;
double get_bmi(double, double);
void result(double);
int main()
{
    double weight, height, BMI;

    cout<<"Enter weight in pounds: ";
    cin>>weight;
    cout<<"Enter height in inches: ";
    cin>>height;

    BMI = get_bmi(weight, height);
    cout<<"Your BMI index is: "<<BMI<<endl;

    result(BMI);
}

double get_bmi(double w, double h)
{
    double bmi = w * 703 / (h*h);
    return bmi;
}

void result(double bmi)
{
    if (bmi>18.5 && bmi<25)
     cout<<"Your weight is optimal!"<<endl;
    else if (bmi<18.5)
     cout<<"You are underweight!"<<endl;
    else
     cout<<"You are overweight!"<<endl;
}