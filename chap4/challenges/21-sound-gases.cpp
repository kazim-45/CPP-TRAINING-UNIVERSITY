#include<iostream>
using namespace std;
void displayMenu();
void validate_choice(int);
void validate_time(double);
double get_distance(int, double);
int main()
{
    displayMenu();

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    validate_choice(choice);

    double time;
    cout<<"Enter sound wave travel time"<<endl;
    cout<<"to location (in sec): ";
    cin>>time;
    validate_time(time);

    double distance;
    distance = get_distance(choice, time);
    
    cout<<"Distance of sound wave from source: "<<distance<<" meters"<<endl;
}

void displayMenu()
{
    cout<<"==== CHOOSE MEDIUM ====\n"<<endl;
    cout<<"1. Carbon Dioxide (258m/s)"<<endl;
    cout<<"2. Air (331.5m/s)"<<endl;
    cout<<"3. Helium (972m/s)"<<endl;
    cout<<"4. Hydrogen (1270m/s)"<<endl;
    cout<<"5. quit"<<endl;
    cout<<"=======================\n";
}

void validate_choice(int choice)
{
    if (choice == 5){
        cout<<"Bye!"<<endl;
        exit(1);
    }
    if (choice !=1 && choice !=2 && choice !=3 && choice != 4){
        cout<<"Invalid choice!"<<endl;
        exit(1);
    }
}

void validate_time(double time)
{
    if (time < 0 || time > 30){
        cout<<"Time must be between 0 - 30 seconds only!"<<endl;
        exit(1);
    }
}

double get_distance(int choice, double time)
{
    const double CO2_SPEED = 258.0;
    const double AIR_SPEED = 331.5;
    const double HELIUM_SPEED = 972.0;
    const double HYDROGEN_SPEED = 1270.0;

    if (choice == 1){
        return CO2_SPEED * time;
    }
    else if (choice == 2){
        return AIR_SPEED * time;
    }
    else if (choice == 3){
        return HELIUM_SPEED * time;
    }
    else if (choice == 4){
        return HYDROGEN_SPEED * time;
    }
    return 0;

}