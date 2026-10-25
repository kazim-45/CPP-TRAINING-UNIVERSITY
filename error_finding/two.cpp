#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    int quotient;
    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you.\n";
    cin >> number1, number2;
    quotient = (number1) / number2;
    cout << quotient<<endl;
return 0;
}