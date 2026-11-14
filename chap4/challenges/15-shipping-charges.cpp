#include<iostream>
using namespace std;
void validate_weight(double);
void validate_distance(double);
double get_charges(double, double);
int main()
{
    cout<<"===== FAST FREIGHT SHIPPING COMPANY ====="<<endl<<endl;

    double weight, distance;

    cout<<"Enter weight of package (in kgs): ";
    cin>>weight;
    validate_weight(weight);

    cout<<"Enter shipping distance (in miles): ";
    cin>>distance;
    validate_distance(distance);

    double total_charges = get_charges(weight, distance);
    cout<<"Total charges: $"<<total_charges<<endl;

}

void validate_weight(double w)
{
    const int MAX_WEIGHT = 20;
    if (w <= 0){
    cout<<"Why is your package empty?"<<endl;
    exit(0);
    }

    else if (w > MAX_WEIGHT){
    cout<<"Maximum weight limit: 20KG!"<<endl;
    exit(0);
    }
}

void validate_distance(double d)
{
    const int MIN_DIST = 10;
    const int MAX_DIST = 3000;
    if (d < MIN_DIST || d > MAX_DIST){
    cout<<"Distance must be between "<<MIN_DIST<<" to "<<MAX_DIST<<" miles"<<endl;
    exit(0);
    }
}

double get_charges(double w, double d)
{
    double rate;
    if (w > 0 && w <= 2)
    rate = 1.10;

    else if (w > 2 && w <= 6)
    rate = 2.20;

    else if (w > 6 && w <= 10)
    rate = 3.70;

    else
    rate = 4.80;

    double total_charges = (d / 500) * rate;
    return total_charges;
}
