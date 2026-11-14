#include<iostream>
#include<string>
using namespace std;
void validate_height(double);
void report(string, string, string, double, double, double);
int main()
{
    string date1, date2, date3;
    double height1, height2, height3;
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    cout<<"\n==== REMEMBER YOUR BEST VAULTS ===="<<endl;
    cout<<"input dates in DD/MM/YY and heights in meters (2-5 only)."<<endl;

    cout<<"\nFirst vault date: ";
    cin>>date1;

    cout<<"First vault height: ";
    cin>>height1;
    validate_height(height1);

    cout<<"Second vault date: ";
    cin>>date2;

    cout<<"Second vault height: ";
    cin>>height2;
    validate_height(height2);

    cout<<"Third vault date: ";
    cin>>date3;

    cout<<"Third vault height: ";
    cin>>height3;
    validate_height(height3);

    cout<<"\n--------------------------\n";
    cout<<"\n"<<name<<"'s Pole Vault Report:"<<endl;
    report(date1, date2, date3, height1, height2, height3);
}

void validate_height(double h)
{
    if (h < 2.0 || h > 5.0){
    cout<<"Invalid height"<<endl;
    exit(0);
    }
}

void report(string d1, string d2, string d3, double h1, double h2, double h3)
{
    string first_date, second_date, third_date;
    double first_height, second_height, third_height;

    if (h1 > h2 && h1 > h3){
        first_date = d1;
        first_height = h1;

        if(h2 > h3){
            second_date = d2;
            second_height = h2;
            third_date = d3;
            third_height = h3;
        }
        else{
            second_date = d3;
            second_height = h3;
            third_date = d2;
            third_height = h2;
        }
    }

    else if (h2 > h1 && h2 > h3){
        first_date = d2;
        first_height = h2;

        if(h1 > h3){
            second_date = d1;
            second_height = h1;
            third_date = d3;
            third_height = h3;
        }
        else{
            second_date = d3;
            second_height = h3;
            third_date = d1;
            third_height = h1;
        }
    }
    else if (h3 > h2 && h3 > h1){
        first_date = d3;
        first_height = h3;

        if(h2 > h1){
            second_date = d2;
            second_height = h2;
            third_date = d1;
            third_height = h1;
        }
        else{
            second_date = d1;
            second_height = h1;
            third_date = d2;
            third_height = h2;
        }
    }
    if (h1 == h2 || h2 == h3 || h1 == h3){
    cout << "Heights are tied! No rankings could be made."<< endl;
    exit(0);
}

    cout<<"\nBest vault details:"<<endl;
    cout<<"Date: "<<first_date<<", Height = "<<first_height<<"m"<<endl;
    
    cout<<"\nSecond best vault details:"<<endl;
    cout<<"Date: "<<second_date<<", Height = "<<second_height<<"m"<<endl;

    cout<<"\nThird best vault details:"<<endl;
    cout<<"Date: "<<third_date<<", Height = "<<third_height<<"m"<<endl;
}