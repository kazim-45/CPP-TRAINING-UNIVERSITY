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
    double weight,height,bmi;
    cout<<"Enter your weight in pounds: ";
    cin>>weight;
    cout<<"Enter your height in inches: ";
    cin>>height;

    /*bmi=weight*703/(height*height);
    cout<<"BMI = "<<bmi<<endl;*/

    bmi = get_bmi(weight, height);
    cout<<"Your BMI: "<<bmi<<endl;

    /*if (bmi < 18.5)
     cout<<"You are underweight."<<endl;

    else if(bmi > 25)
     cout<<"You are overweight."<<endl;

    else
     cout<<"Your weight is optimal."<<endl;*/

    result(bmi);

}

double get_bmi(double w, double h)
{
    return w*703/(h*h);
}

void result(double bmi)
{
    if (bmi < 18.5)
     cout<<"You are underweight."<<endl;

    else if(bmi > 25)
     cout<<"You are overweight."<<endl;

    else
     cout<<"Your weight is optimal."<<endl;
}