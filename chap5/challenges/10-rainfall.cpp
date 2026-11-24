#include<iostream>
#include<iomanip>
using namespace std;
void report(double, double, double);
int main()
{
    int YEARS;
    cout<<"Enter no. of years: ";
    cin>>YEARS;

    while (YEARS < 1){
        cout<<"Enter positive no. of years: ";
        cin>>YEARS;
    }

    double total_inches = 0;
    int total_months = YEARS * 12;

    for(int year = 1; year <= YEARS; year++){
        cout<<"\n\t---- YEAR "<<year<<" ----"<<endl;
        for (int month = 1; month <= 12; month++){


            cout<<"Enter inches of rainfall in month "<<month<<": ";
            double inches;
            cin>>inches;

            while (inches < 0){
                cout<<"Enter positive inches of rainfall in month "<<month<<": ";
                cin>>inches;
            }

            total_inches += inches;
        }
    }

    double avg_rainfall = total_inches / total_months;

    report(total_months, total_inches, avg_rainfall);

    return 0;
}

void report(double m, double i, double avg)
{
    cout<<"\n==== RAINFALL REPORT ===="<<endl;
    cout
    <<"Total months: "<<m<<endl
    <<"Total rainfall: "<<i<<" in"<<endl;

    cout<< fixed <<setprecision(2);
    cout<<"\nAverage rainfall per month: "<<avg<<" in"<<endl;
}