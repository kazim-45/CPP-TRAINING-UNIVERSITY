#include<iostream>
using namespace std;
void verify_balance(double);
double checkFees(int);
void total_fees(double, int, double);
int main()
{
    double balance;
    int checks;
    double check_fees;

    cout<<"Enter account balance: ";
    cin>>balance;
    verify_balance(balance);

    cout<<"Enter number of checks written: ";
    cin>>checks;

    check_fees = checkFees(checks);
    total_fees(balance, checks, check_fees);
}

void verify_balance(double bal)
{
    if (bal < 0)
    {
        cout<<"ALERT! Your account is overdrawn!"<<endl;
        exit(0);
    }
    else if (bal == 0){
        cout<<"Your account is empty!"<<endl;
        exit(0);
    }
}

double checkFees(int checks)
{
    while (checks < 0){
        cout<<"Enter valid number of checks: ";
        cin>>checks;
    }
    if (checks < 20)
    return 0.10;

    else if (checks >= 20 && checks <= 39)
    return 0.08;

    else if (checks >= 40 && checks <= 59)
    return 0.06;

    else 
    return 0.04;
}

void total_fees(double bal, int checks, double check_fees)
{
    const int DEFAULT_CHARGES = 10;
    const int EXTRA_FEE = 15;
    double totalFees = DEFAULT_CHARGES + (checks * check_fees);

    if (bal > 0 && bal <= 400)
    {
        cout<<"Extra charges: $" <<EXTRA_FEE <<endl;
        totalFees += EXTRA_FEE;
    }


    cout<<"Default charges: $"<<DEFAULT_CHARGES<<endl;
    cout<<"Checks fees: $"<<check_fees * checks<<endl;
    cout << "Bank's total service fees for this month: $" << totalFees << endl;
}