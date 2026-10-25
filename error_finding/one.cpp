#include<iostream>
using namespace std;
int main ()
{
    double number1, number2, sum;
    cout << "Enter a number: "; //Cout was written instead of cout
    cin >> number1; //Cin was written instead of cin
    cout << "Enter another number: ";
    cin >> number2;
    sum = number1 + number2;  //variable was on the R.H.S
    cout << "The sum of the two numbers is " << sum;

    return 0;
}
