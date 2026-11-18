#include<iostream>
using namespace std;
void report(double);
int main()
{
    double temp;

    cout<<"Enter temperature: ";
    cin>>temp;

    report(temp);

    return 0;
}

void report(double t)
{
    const int ETHYL_FP = -173;
    const int ETHYL_BP = 172;
    const int HG_FP = -38;
    const int HG_BP = 676;
    const int OXY_FP = -362;
    const int OXY_BP = -306;
    const int WATER_FP = 32;
    const int WATER_BP = 212;


    if (t <= ETHYL_FP){
        cout<<"- Ethyl Alcohol will freeze at that temperature."<<endl;
    }
    if (t >= ETHYL_BP){
        cout<<"- Ethyl Alcohol will boil at that temperature."<<endl;
    }
    if (t <= HG_FP){
        cout<<"- Mercury will freeze at that temperature."<<endl;
    }
    if (t >= HG_BP){
        cout<<"- Mercury will boil at that temperature."<<endl;
    }
    if (t <= OXY_FP){
        cout<<"- Oxygen will freeze at that temperature."<<endl;
    }
    if (t >= OXY_BP){
        cout<<"- Oxygen will boil at that temperature."<<endl;
    }
    if (t <= WATER_FP){
        cout<<"- Water will freeze at that temperature."<<endl;
    }
    if (t >= WATER_BP){
        cout<<"- Water will boil at that temperature."<<endl;
    }
}