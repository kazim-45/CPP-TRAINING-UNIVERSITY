#include<iostream>
using namespace std;
double get_percentage(double, double);
void grade(double);
int main()
{
    cout<<"Enter obtained marks: ";
    double obtained;
    cin>>obtained;
    cout<<"Enter total marks: ";
    double total;
    cin>>total;

    double percentage;
    percentage = get_percentage(obtained, total);

    grade(percentage);

    return 0;
}

double get_percentage(double obtained, double total)
{
    return (obtained / total) * 100;
}

void grade(double percentage)
{
    
    if (percentage <= 100 && percentage >= 90)
    cout<<"Grade: A+"<<endl;
    else if (percentage < 90  && percentage >= 80)
    cout<<"Grade: A"<<endl;
    else if (percentage < 80 && percentage >= 70)
    cout<<"Grade: B"<<endl;
    else if (percentage < 70 && percentage >= 60)
    cout<<"Grade: C"<<endl;
    else if (percentage < 60 && percentage >= 50)
    cout<<"Grade: D"<<endl;
    else if (percentage > 100 || percentage < 0)
    cout<<"Invalid inputs!"<<endl;
    else
    cout<<"You have failed!"<<endl;
}