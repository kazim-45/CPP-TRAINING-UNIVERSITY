//PROGRAM 3
#include<iostream>
using namespace std;
int main()
{
    float purchase, sales_tax = 0.004, country_tax = 0.002, tax_sum, total_tax;

    tax_sum = sales_tax + country_tax;

    cout << "Enter purchase amount: ";
    cin >> purchase;

    total_tax = purchase * tax_sum;

    cout << "The total tax on the purchase = "<< total_tax;

    return 0;
}
