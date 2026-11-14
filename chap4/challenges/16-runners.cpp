#include<iostream>
#include<string>
using namespace std;
void validate_time(double, double, double);
void result(string, string, string, double, double, double);
int main()
{
    string name1, name2, name3;
    double time1, time2, time3;

    cout<<"Enter names of three runners: ";
    cin>>name1>>name2>>name3;

    cout<<"Enter their finish times (in seconds): ";
    cin>>time1>>time2>>time3;
    validate_time(time1, time2, time3);
    
    result(name1, name2, name3, time1, time2, time3);
}

void validate_time(double t1, double t2, double t3)
{
    if (t1 < 0 || t2 < 0 || t3 < 0){
    cout<<"How can you run in reverse time?"<<endl;
    exit(0);
    }
}

void result(string n1, string n2, string n3, double t1, double t2, double t3)
{
    string first, second, third;
    if (t1 < t2 && t1 < t3){
    first = n1;
        if (t2 < t3){
            second = n2;
            third = n3;
        }
        else{
            second = n3;
            third = n2;
        }
    }
    else if (t2 < t1 && t2 < t3){
    first = n2;
        if (t1 < t3){
            second = n1;
            third = n3;
        }
        else{
            second = n3;
            third = n1;
        }
    }
    else if (t3 < t1 && t3 < t2){
    first = n3;
        if (t1 < t2){
            second = n1;
            third = n2;
        }
        else{
            second = n2;
            third = n1;
        }
    }

    
        cout<<"==== Running results ===="<<endl;
        cout<<"First: "<<first<<endl;
        cout<<"Second: "<<second<<endl;
        cout<<"Third: "<<third<<endl;
}