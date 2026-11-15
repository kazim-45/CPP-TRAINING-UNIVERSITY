#include<iostream>
using namespace std;
void displayMenu();
void validate_choice(int);
void validate_distance(double);
double time_taken(int, double);
int main()
{
    displayMenu();

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    validate_choice(choice);

    double distance;
    cout<<"Enter sound wave travel distance: ";
    cin>>distance;
    validate_distance(distance);

    double time;
    time = time_taken(choice, distance);
    
    cout<<"Time taken for sound wave to travel "
    <<distance<<" meters = "<<time<<"secs"<<endl;
}

void displayMenu()
{
    cout<<"==== CHOOSE MEDIUM ====\n"<<endl;
    cout<<"1. AIR"<<endl;
    cout<<"2. WATER"<<endl;
    cout<<"3. STEEL"<<endl;
    cout<<"4. quit"<<endl;
    cout<<"=======================\n";
}

void validate_choice(int choice)
{
    if (choice == 4){
        cout<<"Bye!"<<endl;
        exit(1);
    }
    if (choice !=1 && choice !=2 && choice !=3 && choice != 4){
        cout<<"Invalid choice!"<<endl;
        exit(1);
    }
}

void validate_distance(double distance)
{
    if (distance < 0){
        cout<<"Why is the distance negative?"<<endl;
        exit(1);
    }
}

double time_taken(int choice, double distance)
{
    const int AIR_SPEED = 1100;
    const int WATER_SPEED = 4900;
    const int STEEL_SPEED = 16400;

    if (choice == 1){
        return distance / AIR_SPEED;
    }
    else if (choice == 2){
        return distance / WATER_SPEED;
    }
    else if (choice == 3){
        return distance / STEEL_SPEED;
    }
    return 0;

}