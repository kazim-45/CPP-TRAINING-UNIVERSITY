#include<iostream>
#include<iomanip>
using namespace std;
void report(double, double, double, double);
int main()
{
    int floors;
    cout<<"How many floors are in this hotel? ";
    cin>>floors;

    double total_rooms = 0;
    double total_occupied = 0;

    for (int floor = 1; floor <= floors; floor++){
        cout<<"\n----- FLOOR "<<floor<<" -----"<<endl;

        cout<<"Enter no. of rooms on floor "<<floor<<": ";
        double rooms;
        cin>>rooms;

        while(rooms < 1){
            cout<<"Please enter a positive no. of rooms: ";
            cin>>rooms;
        }
        
        cout<<"Enter no. of rooms occupied on floor "<<floor<<": ";
        double occupied;
        cin>>occupied;

        while(occupied < 0 || occupied > rooms){
            cout<<"Please enter correct no. of occupied rooms: ";
            cin>>occupied;
        }
        

        total_rooms += rooms;
        total_occupied += occupied;
    }

    double unoccupied = total_rooms - total_occupied;
    double occupancy_rate;
    occupancy_rate = (total_occupied / total_rooms * 100);

    report(total_rooms, total_occupied, unoccupied, occupancy_rate);

    return 0;
}

void report(double t_r, double t_o, double u_o, double rate)
{
    cout<<"\n===== HOTEL OCCUPANCY REPORT ====="<<endl;
    cout<<"Total rooms = "<<t_r<<endl;
    cout<<"Occupied rooms = "<<t_o<<endl;
    cout<<"Unoccupied rooms = "<<u_o<<endl;
    cout<< fixed <<setprecision(2);
    cout<<"\nOccupancy rate = "<<rate<<endl;
}