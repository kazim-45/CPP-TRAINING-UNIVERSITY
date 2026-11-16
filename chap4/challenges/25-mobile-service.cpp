#include<iostream>
using namespace std;
void displayMenu();
double total_bill(char, int);
int main()
{
    displayMenu();

    char choice;
    cout<<"Which package did you choose?: ";
    cin>>choice;

    int mins;
    cout<<"Enter minutes used: ";
    cin>>mins;

    double bill;
    bill = total_bill(choice, mins);
    cout<<"This month's total bill = $"<<bill<<endl;

    return 0;
}

void displayMenu()
{
    cout<<"==== SUBSCRIPTION PACKAGES ====\n"<<endl;
    cout<<"A. For $39.99: 450 minutes/month. Additional minutes for $0.45/min"<<endl;
    cout<<"B. For $59.99: 900 minutes/month. Additional minutes for $0.40/min"<<endl;
    cout<<"C. For $69.99: Unlimited minutes/month."<<endl;
    cout<<"D. Quit"<<endl;
    cout<<"===============================\n";
}

double total_bill(char c, int mins)
{
    if (c == 'A'){
        const double price = 39.99;
        const double ADD_RATE = 0.45;

        cout<<"Price of package = $"<<price<<endl;

        if (mins > 450){
            int add_mins = mins - 450;
            double add_charges = add_mins * ADD_RATE;

            cout<<"Additional minutes charges: $"<<add_charges<<endl;
            
            return price + add_charges;
        }
        else 
        return price;
    }

    else if (c == 'B'){
        const double price = 59.99;
        const double ADD_RATE = 0.40;

        cout<<"Price of package = $"<<price<<endl;

        if (mins > 900){
            int add_mins = mins - 900;
            double add_charges = add_mins * ADD_RATE;

            cout<<"Additional minutes charges: $"<<add_charges<<endl;
            
            return price + add_charges;
        }
        else 
        return price;
    }

    else if (c == 'C'){
        const double price = 69.99;

        cout<<"Price of package = $"<<price<<endl;
        return price;
    }

    else if (c == 'D'){
        cout<<"Goodbye!"<<endl;
        exit(1);
    }

    else if (c != 'A' && c != 'B' && c != 'C' && c != 'D'){
        cout<<"Invalid choice."<<endl;
        exit(1);
    }

    return 0;
}