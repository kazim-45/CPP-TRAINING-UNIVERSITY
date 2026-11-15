#include<iostream>
#include<iomanip>
using namespace std;
void validate_inputs(double, double);
double get_fat_calories(double);
double get_fat_percentage(double, double);
void result(double, double, double);
int main()
{
    double total_calories, fat_grams, fat_calories, fat_percentage;

    cout<<"Enter total calories in food: ";
    cin>>total_calories;
    
    cout<<"Enter grams of fat in food: ";
    cin>>fat_grams;
    validate_inputs(total_calories, fat_grams);

    fat_calories = get_fat_calories(fat_grams);

    fat_percentage = get_fat_percentage(fat_calories, total_calories);

    result(total_calories, fat_calories, fat_percentage);

    return 0;
}
void validate_inputs(double cal, double fat)
{
    if (cal < 0 || fat < 0){
    cout<<"How are you eating negative food?"<<endl;
    exit(0);
    }

    if (fat > cal){
    cout<<"How are fats more than the total calories?"<<endl;
    exit(0);
    }
}

double get_fat_calories(double grams)
{
    return grams * 9;
}

double get_fat_percentage(double fat_cal, double total_cal)
{
    return fat_cal / total_cal * 100;
}

void result(double total_cal, double fat_cal, double fat_perc)
{
    cout<<"\n- Total calories in food: "<<total_cal<<endl;
    cout<<"- Fat calories in food: "<<fat_cal<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"- Fat calorie percentage: "<<fat_perc<<"%"<<endl;

    if (fat_perc < 30){
    cout<<"\nThe food is low in fat."<<endl;
    }
}