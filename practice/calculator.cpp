#include<iostream>
using namespace std;
void displayMenu(void);
double sum(double, double);
double subtract(double, double);
double prod(double, double);
double divide(double, double);
int main()
{
    double num1, num2, result;
    int choice;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    displayMenu();
    cin>>choice;

    switch (choice)
    {
    case 1:
        result = sum(num1, num2);
        break;
    case 2:
    result = subtract(num1, num2);
    break;
    case 3:
    result = prod(num1, num2);
    break;
    case 4:
    result = divide(num1, num2);
    break;
    case 5:
    cout<<"Bye Bye.";

    default:
    cout<<"Wrong choice.";
        break;
    }

    cout<<result<<endl;
}

void displayMenu(void)
{
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Product"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Quit"<<endl;

    cout<<"Enter your choice: ";
}

double sum(double a, double b)
{
    return a+b;
}

double subtract(double a, double b)
{
    return a-b;
}
double prod(double a, double b)
{
    return a*b;
}
double divide(double a, double b)
{
    if (b == 0)
    {
        cout<<"Can't divide by zero."<<endl;
        exit(0);
    }
    return a/b;
}