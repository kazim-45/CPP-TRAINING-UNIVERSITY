#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int employee_num;
    double gross_pay;
    double state_tax, fed_tax, FICA;
    double net_pay = 0, total_gross = 0, total_state = 0, total_fed = 0, total_FICA = 0;

    cout << "Weekly Payroll Report\n";
    cout << "=====================\n";
    cout << "Enter 0 for employee number to quit.\n\n";

    do{
        cout<<"\nEnter employee number: ";
        cin>>employee_num;
        if(employee_num == 0) break;
        cout<<endl;

        cout<<"Enter gross pay: ";
        cin>>gross_pay;

        cout<<"Enter state tax %age: ";
        cin>>state_tax;

        cout<<"Enter federal tax %age: ";
        cin>>fed_tax;

        cout<<"Enter FICA with-holdings %age: ";
        cin>>FICA;

        total_gross += gross_pay;
        total_state += gross_pay * (state_tax / 100);
        total_fed += gross_pay * (fed_tax / 100);
        total_FICA += gross_pay * (FICA / 100);
        
        
    }while(employee_num != 0);


    net_pay = total_gross - total_state - total_fed - total_FICA;

    cout << "\nWeekly Payroll Totals\n";
    cout << "=====================\n";
    cout << fixed << setprecision(2);
    cout<<"\nTotal gross pay = $"<<total_gross<<endl;
    cout<<"\nTotal state tax = $"<<total_state<<endl;
    cout<<"Total federal tax = $"<<total_fed<<endl;
    cout<<"Total FICA with-holdings = $"<<total_FICA<<endl;

    cout<<"\nNet pay of employees = $"<<net_pay<<endl;

    return 0;

}