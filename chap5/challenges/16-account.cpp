#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main()
{
    double starting, annual_interest;
    int months;

    cout << "Enter starting account balance: ";
    cin >> starting;
    while (starting < 0)
    {
        cout << "Enter non-negative starting balance: ";
        cin >> starting;
    }

    cout << "Enter annual interest rate %age: ";
    cin >> annual_interest;
    while (annual_interest < 0)
    {
        cout << "Enter non-negative annual interest rate: ";
        cin >> annual_interest;
    }

    cout << "Enter months passed since account establishment: ";
    cin >> months;
    while (months < 1)
    {
        cout << "Enter a positive number of months: ";
        cin >> months;
    }

    double total_deposits = 0;
    double total_withdrawn = 0;
    double total_interest = 0;
    double balance = starting;

    double monthly_interest = (annual_interest / 100.0) / 12.0;

    for (int month = 1; month <= months; month++)
    {
        cout << "==== MONTH " << month << " ====" << endl;

        cout << "Enter amount deposited in month " << month << ": ";
        double monthly_deposit;
        cin >> monthly_deposit;
        while (monthly_deposit < 0)
        {
            cout << "Enter non-negative amount deposited in month " << month << ": ";
            cin >> monthly_deposit;
        }

        cout << "Enter amount withdrawn in month " << month << ": ";
        double monthly_withdrawn;
        cin >> monthly_withdrawn;
        while (monthly_withdrawn < 0 || monthly_withdrawn > balance + monthly_deposit)
        {
            cout << "Invalid withdrawal. Enter amount between 0 and $"
                 << (balance + monthly_deposit) << ": ";
            cin >> monthly_withdrawn;
        }

        balance += monthly_deposit;
        balance -= monthly_withdrawn;
        
        double interest = balance * monthly_interest;
        balance += interest;

        total_deposits += monthly_deposit;
        total_withdrawn += monthly_withdrawn;
        total_interest += interest;
    }

    if (balance < 0)
    {
        cout << "\nThe account is closed/terminated!" << endl;
        return 0;
    }

    cout << "\n===== " << months << " MONTHS' SAVINGS ACCOUNT REPORT =====" << endl;

    cout << fixed << setprecision(2);
    cout << "\nStarting account balance = $" << starting << endl;
    cout << "Total amount deposited   = $" << total_deposits << endl;
    cout << "Total amount withdrawn   = $" << total_withdrawn << endl;
    cout << "Total interest earned    = $" << total_interest << endl;
    cout << "\nTotal Current Balance    = $" << balance << endl;

    return 0;
}