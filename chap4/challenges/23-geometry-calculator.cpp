#include<iostream>
using namespace std;
void displayMenu();
void result(int);
int main()
{
    displayMenu();

    int choice;
    cout<<"Enter your choice (1-4): ";
    cin>>choice;
    
    result(choice);

    return 0;
}

void displayMenu()
{
    cout<<"==== GEOMETRY CALCULATOR ====\n"<<endl;
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"=============================\n";
}

void result(int c)
{
    const double PI = 3.14159;

    if (c == 1){
        double radius, area;

        cout<<"Enter radius of circle (in cm): ";
        cin>>radius;
        while (radius < 0){
            cout<<"Radius can't be negative!"<<endl;
            cout<<"Enter radius of circle (in cm): ";
            cin>>radius;
        }

        area = PI * (radius * radius);
        cout<<"Area of the circle = "<<area<<"cm²"<<endl;
    }

    else if (c == 2){
        double length, width, area;

        cout<<"Enter length of rectangle (in cm): ";
        cin>>length;
        cout<<"Enter width of rectangle (in cm): ";
        cin>>width;

        while (length < 0 || width < 0){
            cout<<"Values can't be negative!"<<endl;
            cout<<"Enter length of rectangle (in cm): ";
            cin>>length;
            cout<<"Enter width of rectangle (in cm): ";
            cin>>width;
        }

        area = length * width;
        cout<<"Area of the rectangle = "<<area<<"cm²"<<endl;
    }

    else if (c == 3){
        double base, height, area;

        cout<<"Enter base length of triangle (in cm): ";
        cin>>base;
        cout<<"Enter height of triangle (in cm): ";
        cin>>height;

        while (base < 0 || height < 0){
            cout<<"Values can't be negative!"<<endl;
            cout<<"Enter base length of triangle (in cm): ";
            cin>>base;
            cout<<"Enter height of triangle (in cm): ";
            cin>>height;
        }

        area = base * height * 0.5;
        cout<<"Area of triangle = "<<area<<"cm²"<<endl;
    }

    else if (c == 4){
        cout<<"Goodbye!"<<endl;
        exit(1);
    }

    else if (c != 1 && c != 2 && c != 3 && c!= 4){
        cout<<"Invalid choice.";
        exit(1);
    }
}